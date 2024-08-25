#include <iostream>

using namespace std;

int main() {

int vector[] = {2, 4, 7, 1, 3, 6, 5};

int aux = 0;


for (int i=0; i<7; i++) {

    for (int j=0; j<7; j++) {

        if (vector[j] > vector[j+1]) {

            aux = vector[j];

            vector[j] = vector[j+1];

            vector[j+1] = aux; 

        }
    }
}

for (int i=0; i<7; i++) {

    cout<<vector[i]<<" ";

}


return 0;

}