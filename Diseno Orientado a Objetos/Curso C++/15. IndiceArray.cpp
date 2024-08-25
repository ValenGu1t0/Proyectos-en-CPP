#include <iostream>

using namespace std;

int main () {

int array[100];

int n;

cout<<"Ingrese el numero de valores que quiere tener en su array: "; cin>>n;

for (int i=0; i<n; i++) {

    cout<<"Digite un numero: "; cin>>array[i];

}

for (int i=0; i<n; i++) {

    cout<<i<<" --> "<<array[i]<<endl;

}

}