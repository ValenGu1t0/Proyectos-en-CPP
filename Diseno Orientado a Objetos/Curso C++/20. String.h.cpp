#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char palabra[] = "Hola";
    char palabra2[10];
    char palabra3[30];
    char apellido[15];

    cout<<"Ingrese su apellido: ";
    // Tomando string como inputs: 
    cin.getline(apellido, 15, '\n');
    // nombre_var, espacio_res, donde quiero que termine 

    
    // String Length - Devuelve cant de elementos
    int longitud = 0;   
    longitud = strlen(palabra);
    cout<<"La palabra "<<palabra<<" posee "<<longitud<< " letras!"<<endl;


    // String Copy, pega el contenido de un string en otro
    strcpy(palabra2, palabra);
    //  str vacio, str contenido
    cout<<"Se acaba de copiar "<<palabra<<" en "<<palabra2<<endl;


    // String Compare - Compara largo de dos string
    if (strcmp(palabra, palabra2) == 0) {         // Si es V, devuelve 0 --- Si es F, devuelve 1

        cout<<"Las cadenas son iguales, se copio correctamente"<<endl;

    } else {

        cout<<"No son iguales, no se copio el string!"<<endl;
    }


    // String Cat - Concatena strings, en el sig orden: 
    strcat(palabra3, palabra);  // Primero pega la primera (pal3 esta vacio!)

    strcat(palabra3, palabra2); // Y ahora la segunda al contenido que ya habia en pal3

    cout<<"Se fusionaron las palabras y quedo: "<<palabra3<<endl;


    // String Reverse - Invierte una cadena
    strrev(palabra3);
    cout<<"Ahora la palabra revertida se ve asi: "<<palabra3<<endl;


    // String Upper - Cambia de minus a mayus
    strupr(palabra3);
    cout<<"Ahora se puso en Mayus la cadena: "<<palabra3;
    // String Lower - Cambia de mayusa minus
    strlwr(palabra3);
    cout<<"Ahora se puso en Minus la cadena: "<<palabra3;


    // Funciones atoi() y atof() -> Transforma una cadena a numeros y viceversa


return 0;

}