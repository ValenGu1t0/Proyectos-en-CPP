#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <limits> 
#include "subastas.h"

using namespace std;

/////////////////////////////////////////////////////////////////// MAIN ////////////////////////////////////////////////////////////////////////////////////

int main() {

    Subasta subasta;

    // Instancio a los clientes:
    vector<Persona>clientes = {
        Persona("Valentino"),
        Persona("Martina"),
        Persona("Fernando"),
        Persona("Michelle")
    };

    // Obtenemos los lotes del archivo - Tuve que indicar la ruta porque no me lo leia si no
    // ATENTO A LA RUTA, depende quien lo ejecute, la ubicacion de esta carpeta puede cambiar!!!!!!!!!!!!
    vector<Lote>productos = leerLotesArchivo("c:/Users/Valentino/Desktop/C++/TPSubastas/lotes.txt");

    cout<<endl<<endl;
    cout<<"Bienvenidos a la Subasta Historica de Valentino XVI"<<endl;
    cout<<"Tomen asiento en lo que empezamos.."<<endl;

    // Dependiendo la cantidad de productos repetimos proceso de subasta
    // Esto permite hacer la cantidad de rondas que queramos como cant de productos hayan en el archivo
    for (size_t i = 0; i < productos.size(); i++) {

        cout<<endl<<"Comenzamos con el Lote Numero "<<i+1<<":"<<endl;
        productos[i].mostrarLote();

        Adjudicado adjudicado = realizarSubasta(productos[i], clientes);
        subasta.registraLote(adjudicado);

        cout<<endl<<"Adjudicado! Felicitaciones!"<<endl;
    }

    cout<<endl<<"No quedan mas lotes por vender.."<<endl;
    cout<<"Resultados de la subasta:"<<endl;

    subasta.mostrarVendidos();

    // Guardamos los lotes adjudicados en un nuevo archivo:
    escribirLotesEnArchivo("adjudicados.txt", subasta.getVendidos());

    return 0;
}