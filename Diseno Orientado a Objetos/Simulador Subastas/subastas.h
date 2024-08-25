#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <limits> 

using namespace std;

///////////////////////////////////////////////// CLASES /////////////////////////////////////////////////////////////

class Lote {

        private:
        string nombreLote;
        int nroLote, ofertaInicial;

        public:
        Lote(string, int, int); // Constructor Lotes
        void mostrarLote();
        int getOfertaInicial() const { return ofertaInicial; } // Declarar const
        int getNroLote() const { return nroLote; } // Declarar const
        string getNombreLote() const { return nombreLote; } // Declarar const
};

class Adjudicado : public Lote {

        private:
        int ofertaGanadora;
        string nombreGanador;

        public:
        Adjudicado(string, int, int, int, string);
        void mostrarAdjudicado();
        int getOfertaGanadora() const { return ofertaGanadora; } // Declarar const
        string getNombreGanador() const { return nombreGanador; } // Declarar const
};

class Subasta {

        private:
        vector<Adjudicado> vendidos;

        public:
        Subasta();
        void registraLote(Adjudicado);
        void mostrarVendidos();
        vector<Adjudicado>& getVendidos() { return vendidos; }
};

class Persona {

        private:
        string nombre;
        int pujada;

        public:
        Persona(string);
        string nombrePersona();
        int pujaPersona();
};


///////////////////////////////////////////////// METODOS CONSTRUCTORES /////////////////////////////////////////////////////////////

Lote::Lote(string _nombreLote, int _nroLote, int _ofertaInicial) {

    nombreLote = _nombreLote;
    nroLote = _nroLote;
    ofertaInicial = _ofertaInicial;
}

Persona::Persona(string _nombre) {

    nombre = _nombre;
}

Subasta::Subasta() {

}

Adjudicado::Adjudicado(string _nombreLote, int _nroLote, int _ofertaInicial, int _ofertaGanadora, string _nombreGanador)
: Lote(_nombreLote, _nroLote, _ofertaInicial) {

    ofertaGanadora = _ofertaGanadora;
    nombreGanador = _nombreGanador;
}


///////////////////////////////////////////////// METODOS CLASES /////////////////////////////////////////////////////////////

void Lote :: mostrarLote() {

    cout<<endl<<"Producto del lote: "<<nombreLote<<endl;
    cout<<"Codigo del lote: "<<nroLote<<endl;
    cout<<"La puja inicial es de $"<<ofertaInicial<<" Dolares"<<endl;
}

void Adjudicado :: mostrarAdjudicado() {

    mostrarLote();
    cout<<"La puja ganadora es de $"<<ofertaGanadora<<" dolares"<<endl;
    cout<<"Comprador: "<<nombreGanador<<endl<<endl;
}

void Subasta :: registraLote(Adjudicado lote) {

    vendidos.push_back(lote);
}

void Subasta :: mostrarVendidos() {

    for (size_t i = 0; i < vendidos.size(); i++) {

        cout<<endl<<"LOTE "<<i+1<<":"<<endl;
        vendidos[i].mostrarAdjudicado();
    }
}

string Persona :: nombrePersona() {

    return nombre;
}

int Persona :: pujaPersona() {

    cout<<"Ingrese su puja: "; 

    while (!(cin >> pujada)) {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout<<"Tiene que ingresar un numero, la subasta es en dolares: ";
    }
    return pujada;
}

// De esta manera comprobamos que haya un ganador, y registramos asi su oferta y 
Adjudicado realizarSubasta(Lote lote, vector<Persona>&clientes) {

    int ofertaActual = lote.getOfertaInicial();
    int cantPujas = 0;
    string nombreGanador;

    while(cantPujas < 3) {

        cantPujas = 0;

        for (auto &cliente : clientes) {

            int opcion;

            cout<<endl<<"Sr/Sra "<<cliente.nombrePersona()<<", desea pujar por este articulo? (1: Si, 0: No): "; 

            while (!(cin >> opcion) || (opcion != 0 && opcion != 1)) {

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Entrada inválida. Ingrese 1 (Si) o 0 (No): ";
            }

            if (opcion == 1) {

                // Puja actual en cada momento
                int puja = cliente.pujaPersona();

                // Si nadie ofrece mas, guardamos el nombre del cliente actual
                if (puja > ofertaActual) {
                    ofertaActual = puja;
                    nombreGanador = cliente.nombrePersona();
                }

            } else { cantPujas++; }
        }
    }
    return Adjudicado(lote.getNombreLote(), lote.getNroLote(), lote.getOfertaInicial(), ofertaActual, nombreGanador);
}



///////////////////////////////////////////////// METODOS ARCHIVOS /////////////////////////////////////////////////////////////

// Función para leer y obtener los lotes desde un archivo .txt
vector<Lote>leerLotesArchivo(const string &nombreArchivo) {

    vector<Lote>lotes;  // Guardo los objetos de la subasta

    ifstream archivo(nombreArchivo);

    if (archivo.is_open()) {

        cout<<endl<<"El archivo: "<<nombreArchivo<<" se ha abierto exitosamente."<<endl<<endl;
        string linea;

        while (getline(archivo, linea)) {

            stringstream ss(linea);
            string nombreLote;
            int nroLote, ofertaInicial;

            cout<<"Nombre, Codigo y Precio del Lote: "<<linea<<endl;
            ss>>nombreLote>>nroLote>>ofertaInicial;

            // Verifica si la línea se leyó correctamente o si hay algo fuera de formato
            if (ss.fail()) {

                cout<<"Error al leer la línea: "<<linea<<endl;

            } else {

                lotes.push_back(Lote(nombreLote, nroLote, ofertaInicial));  // Si no es el caso, instanciamos
            }
        }
        archivo.close();
        
    } else {
        cout<<"No se pudo abrir el archivo "<<nombreArchivo<<endl;
    }
    return lotes;
}

// Función para escribir lotes adjudicados en un archivo de texto
void escribirLotesEnArchivo(const string &nombreArchivo, const vector<Adjudicado> &adjudicados) {

    ofstream archivo(nombreArchivo);

    if (archivo.is_open()) {

        for (const auto &lote : adjudicados) {

            archivo<<lote.getNombreLote()<<" "
                   <<lote.getNroLote()<<" "
                   <<lote.getOfertaInicial()<<" "
                   <<lote.getOfertaGanadora()<<" "
                   <<lote.getNombreGanador()<<endl;
        }
        archivo.close();

    } else { cout<<"No se pudo abrir el archivo "<<nombreArchivo<<endl; }
}
