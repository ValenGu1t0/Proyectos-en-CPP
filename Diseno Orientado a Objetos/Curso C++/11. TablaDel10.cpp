#include <iostream>

using namespace std;

int main () {

int entero, mult, aux;

cout<<"Ingrese un entero del 1 al 10 para ver su tabla: "; cin>>entero;

for (mult=0; mult<=10; mult++) {

    aux = entero * mult;

    cout<<aux<<endl;

}

return 0;

}