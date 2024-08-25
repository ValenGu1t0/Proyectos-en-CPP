#include <iostream>     // Librerias - Input y Output

using namespace std;    // Estandar general para crear outputs

int main () {

    int edad;
    float altura;    
    char sexo[10];      

    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su altura: "; cin>>altura;
    cout<<"Ingrese su genero: "; cin>>sexo;

    cout<<"La ficha tecnica de este muchacho es: \n";
    cout<<"- Edad: "<<edad<<endl;
    cout.precision(3);                  // Limitamos la precision del proximo flotante
    cout<<"- Altura: "<<altura<<endl;
    cout<<"- Genero: "<<sexo<<endl;     // Toma string igualmente


    return 0;
}