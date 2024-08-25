#include "cache.h"
#define LONGARRAY 255

using namespace std;

// Vamos a trabajar con un manejador de stock de un videoclub

class Pelicula {

    char nombre[LONGARRAY];
    int precio;
    int stock;

    public:
    static const string class_name;     // Cada clase tendra un static llamado : class_name

    Pelicula(string _nombre, int _precio, int _stock) {

        int i;

        for (i = 0; (size_t)i < _nombre.length() && i < LONGARRAY; i++) {
            nombre[i] = _nombre[i]; 
            }

        nombre[i] = '\0';
        precio = _precio;
        stock = _stock;
    }

    friend ostream &operator<<(ostream&, Pelicula);

    void print() {

        cout<<"Pelicula '"<<nombre<<"' - $"<<precio<<" - En Stock: "<<stock<<endl;
    }

    Pelicula() {};
    ~Pelicula() {};
};


// ---------------------------------------------------------------------------------------------------- //


const string Pelicula :: class_name = "PeliculasClass";

ostream &operator<<(ostream &os, Pelicula pelicula) {

    pelicula.print();
    return os;
}

void stockVideoClub();

void ejemploOriginal_ConStudent();

void stockVideoClub() {

    cout<<endl<<endl<<"Trabajo Final - D00 2024 - Privitera Valentino"<<endl;
    cout<<endl<<endl<<"Bienvenidos al Administrador de Peliculas de BlockBuster"<<endl<<endl<<endl;

    CacheManager<Pelicula>my_cache(5);

    cout<<"1) Generamos una memoria cache de 5 slots y guardamos 3 peliculas: "<<endl;

    my_cache.insert("A1", Pelicula("Un Lugar en Silencio: Dia Uno", 6000, 3));
    my_cache.insert("B1", Pelicula("Deadpool & Wolverine", 7000, 2));
    my_cache.insert("C2", Pelicula("Intensamente 2", 7000, 5));
    my_cache.show_cache();
    my_cache.imprimirMemoria();

    cout<<endl<<endl<<"2) Agregamos una 4ta pelicula "<< endl;

    my_cache.insert("D3", Pelicula("El Senyor de los Anillos: Las Dos Torres", 3000, 6));
    my_cache.show_cache();
    my_cache.imprimirMemoria();

    cout<<endl<<endl<<"3) Actualizamos precio y stock de la pelicula 'A1' "<<endl;

    my_cache.insert("A1", Pelicula("Un Lugar en Silencio: Dia Uno", 7000, 11));
    my_cache.show_cache();
    my_cache.imprimirMemoria();

    cout<<endl<<endl<<"4) Agregamos una 5ta pelicula "<<endl;

    my_cache.insert("E3", Pelicula("El Show de Truman", 3500, 16));
    my_cache.show_cache();
    my_cache.imprimirMemoria();

    cout<<endl<<endl<<"5) Agregamos una 6ta pelicula "<<endl;

    my_cache.insert("F2", Pelicula("Un Lugar Llamado Notting Hill", 5000, 18));
    my_cache.show_cache();
    my_cache.imprimirMemoria();
}


// ---------------------------------------------------------------------------------------------------- //


int main() {

    stockVideoClub();
    
    return 0;
}


// ---------------------------------------------------------------------------------------------------- //