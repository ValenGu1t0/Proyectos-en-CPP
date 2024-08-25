#include <iostream>     // Librerias - Input y Output

using namespace std;    // Estandar general para crear outputs

int main () {

    // Printf - cout<< 
    cout<<"Hola Mundo!! \n";    

    // Declarar tipos de datos primitivos y asignarle valor
    int number = 15;    
    float decimal = 2.5;
    double pi = 3.14680000000000000124134;
    char letra = 'a';

    cout<<number<<endl;       // Printear una variable - solo con nombrarla


    // Scanf - cin>>

    int variable;

    cout<<"Ingrese un entero: ";
    cin>>variable;
    
    cout<<"Ud ingresó "<<variable;  // Poner el nro ingresado en el mismo print




    return 0;
}