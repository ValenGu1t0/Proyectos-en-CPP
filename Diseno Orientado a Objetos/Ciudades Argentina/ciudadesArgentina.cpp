#include <iostream>
#include <string>      
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

/* b) Una ciudad además de un nombre, posee un código postal y está localizada en una
provincia. Esta tiene un nombre y la superficie en metros cuadrados.

Se debe generar un listado de ciudades completas y otro que sea solo de las ciudades de
una provincia determinada.  */


////////// CLASES //////////
class Ciudad {

    private:
    string nombreC;
    int cp;
    
    public:
    Ciudad(string, int);
    string nombreCiudad();
    int cpCiudad();
};


class Provincia {

    private:
    string nombreP;
    int km2;
    
    vector<Ciudad>cities;

    public:
    Provincia(string, int);
    void guardaCiudad(Ciudad);
    void listaCiudades();        

};


////////// CONSTRUCTORES //////////
Ciudad :: Ciudad (string nameC, int postalCode) {

    nombreC = nameC;        cp = postalCode;
}

Provincia :: Provincia (string nameP, int kilom) {

    nombreP = nameP;        km2 = kilom;
}


string Ciudad :: nombreCiudad() {

    return  nombreC;
}

int Ciudad :: cpCiudad() {

    return  cp;
}

void Provincia :: guardaCiudad(Ciudad city) {

    cities.push_back(city);
}

void Provincia :: listaCiudades() {

    for (auto Ciudad : cities) {

        cout<<Ciudad.nombreCiudad()<<", Codigo Postal: "<<Ciudad.cpCiudad()<<endl; // Al ser un return SI HACE FALTA el cout --- si era un mensaje como datosCiudad() no hace falta el cout
    }
}


////////////////////// MAIN //////////////////////

int main () {

int opcion, opcion2;

////////////////////// INSTANCIAMOS OBJETOS //////////////////////

// Cada provincia tiene un nombre y superficie en km2
Provincia bsas("Buenos Aires", 203);
Provincia stafe("Santa Fe", 310);
Provincia cba("Cordoba", 184);
Provincia mdz("Mendoza", 167);

// PROVINCIA: BSAS 
Ciudad capi("Buenos Aires Capital", 1000);
Ciudad sn("San Nicolas de los Arroyos", 2900);
Ciudad zarate("Zarate", 1600);

// PROVINCIA: SANTA FE
Ciudad ros("Rosario", 2000);
Ciudad santaf("Santa Fe Capital", 2200);
Ciudad venado("Venado Tuerto", 2800);

// PROVINCIA: CORDOBA
Ciudad cbaC("Cordoba Capital", 3000);
Ciudad belgrano("Villa Belgrano", 3400);
Ciudad capilla("Capilla del Monte", 3760);

// PROVINCIA: MENDOZA
Ciudad mdzaC("Mendoza Capital", 4000);
Ciudad rafa("San Rafael", 4100);

// CIUDADES DE BSAS
bsas.guardaCiudad(capi);
bsas.guardaCiudad(sn);
bsas.guardaCiudad(zarate);

// CIUDADES DE SANTA FE
stafe.guardaCiudad(ros);
stafe.guardaCiudad(santaf);
stafe.guardaCiudad(venado);

// CIUDADES DE CORDOBA
cba.guardaCiudad(cbaC);
cba.guardaCiudad(belgrano);
cba.guardaCiudad(capilla);

// CIUDADES DE MENDOZA
mdz.guardaCiudad(mdzaC);
mdz.guardaCiudad(rafa);


//////////////////////////////////////////////////////////////////

cout<<"- Bienvenido al Centro Geografico Nacional Argentino"<<endl;

do {

cout<<endl<<"- Que desea consultar?"<<endl;
cout<<"1 - Ver Ciudades de Argentina"<<endl;
cout<<"2 - Ver Ciudades por Provincia"<<endl;
cout<<"3 - Ver Provincias de Argentina"<<endl;      // falta vector para mostrar provincias
cout<<"4 - Salir"<<endl;
cout<<endl<<"Ingrese una opcion: ";
cin>>opcion;

switch (opcion) {

    case 1: {

        cout<<endl<<"- Todas las ciudades de Argentina:"<<endl<<endl;
        bsas.listaCiudades();
        stafe.listaCiudades();
        cba.listaCiudades();
        mdz.listaCiudades();
        break;
    }
    

    case 2: {

        cout<<endl<<"- Que Provincia consultar?"<<endl;
        cout<<"1 - Ver Ciudades de la Provincia de Buenos Aires"<<endl;
        cout<<"2 - Ver Ciudades de la Provincia de Santa Fe"<<endl;
        cout<<"3 - Ver Ciudades de la Provincia de Cordoba"<<endl;
        cout<<"4 - Ver Ciudades de la Provincia de Mendoza"<<endl;
        cout<<"5 - Volver"<<endl;
        cout<<endl<<"Ingrese una opcion: ";
        cin>>opcion2;
        
        switch(opcion2) {
         
            case 1: { cout<<"Todas las ciudades de Provincia Buenos Aires:"<<endl; bsas.listaCiudades(); break; }
            case 2: { cout<<"Todas las ciudades de Provincia Santa Fe:"<<endl; stafe.listaCiudades(); break; }
            case 3: { cout<<"Todas las ciudades de Provincia Cordoba:"<<endl; cba.listaCiudades(); break; }
            case 4: { cout<<"Todas las ciudades de Provincia Mendoza:"<<endl; mdz.listaCiudades(); break; }
            case 5: break;
        }
    
    break; } 

    case 3: { exit(0); }

    default: cout<<endl<<"Ingrese una opcion entre 1, 2 o 3"<<endl; break;
}

} while (opcion != 3);

return 0;

}