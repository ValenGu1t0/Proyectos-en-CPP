#include <iostream>
#include <string>      
#include <vector>
#include <stdlib.h>
#include <simulador.h>

using namespace std;

/* a) Los alumnos del instituto son identificados por su dni. Se registran el nombre y el mail.
Las materias tienen un código, pueden ser del primer o del segundo cuatrimestre y registran una 
lista de alumnos que están inscriptos.

Debe:
- Representar los objetos descriptos con clases.
- Cada clase debe poseer los métodos necesarios para poder ser manipulados.
- Se deben poder inscribir alumnos a las materias.
- Se debe poder ver la lista de alumnos que están inscriptos.
- Se debe poder consultar si un alumno está inscripto o no en una materia buscando por su dni */


int main () {

    int opcion;
    
    // INSTANCIO LAS MATERIAS -> Cada una tiene Cuatrimestre en el que se dictan, Codigo de inscripcion y Nombre
    Materia doo(1, 1, "DOO");
    Materia arq(2, 2, "ARQ");
    Materia bdd(1, 3, "BDD");
    // Si se desea agregar mas materias, se instancian aca y se agregan los cases correspondientes

    ////////////////////////////// MENU ////////////////////////////////

    cout<<"Bienvenido al Siu Guarani!"<<endl;
    cout<<endl<<"- Elija una de las siguientes opciones: "<<endl;

    do {
        cout<<"(1) - Inscribirse a Materia"<<endl;
        cout<<"(2) - Ver Alumnos Inscriptos por Materia"<<endl;
        cout<<"(3) - Consultar Inscripcion en Materia"<<endl;
        cout<<"(4) - Salir del Programa"<<endl<<endl;
        cout<<"- Su opcion: ";  cin>>opcion;

        switch (opcion) {
        
        // Inscribirse a Materia //
        case 1: { int dni, mat; string nombre, email;
        
        cout<<"Ingrese su nombre: ";    cin>>nombre;
        cout<<"Ingrese su DNI: ";       cin>>dni;
        cout<<"Ingrese su email: ";     cin>>email;

        Alumno alumno(dni, nombre, email);      // Instanciamos al objeto "alumno" temporalmente con las variables recopiladas

        cout<<endl<<"- Ingrese que materia quiere inscribirse: "<<endl;
        cout<<"(1) - Diseño Orientado a Objetos"<<endl;
        cout<<"(2) - Arquitectura de las Computadoras"<<endl;
        cout<<"(3) - Bases de Datos"<<endl;
        cout<<endl<<"Codigo de materia que desea inscribir: "; cin>>mat;

            switch (mat) {

            case 1: doo.enrolarAlumno(alumno); 
                    cout<<"Inscripto!"<<endl; 
                    break;
            case 2: arq.enrolarAlumno(alumno);
                    cout<<"Inscripto!"<<endl; 
                    break;
            case 3: bdd.enrolarAlumno(alumno); 
                    cout<<"Inscripto!"<<endl; 
                    break;
            }
            cout<<endl;
        break;
        }

        // Ver Alumnos Inscriptos por Materia //
        case 2: {   int mat;

            cout<<endl<<"De que materia desea ver el listado de inscriptos?"<<endl;
            cout<<"(1) - Diseño Orientado a Objetos"<<endl;
            cout<<"(2) - Arquitectura de las Computadoras"<<endl;
            cout<<"(3) - Bases de Datos"<<endl;
            cout<<endl<<"Codigo de Materia que desea consultar: ";  cin>>mat;

            switch (mat) {

            case 1: cout<<"Inscriptos en DOO: "<<endl;
                    doo.listarAlumnos(); cout<<endl;
                    break;

            case 2: cout<<"Inscriptos en ARQ: "<<endl;
                    arq.listarAlumnos(); cout<<endl;
                    break;

            case 3: cout<<"Inscriptos en BDD: "<<endl;
                    bdd.listarAlumnos(); cout<<endl;
                    break;
            }
        break;
        }

        // Consultar Inscripcion en Materia //
        case 3: {   int docu, mat;

            cout<<endl<<"Que materia desea ver si esta inscripto en?"<<endl;
            cout<<"(1) - Diseño Orientado a Objetos"<<endl;
            cout<<"(2) - Arquitectura de las Computadoras"<<endl;
            cout<<"(3) - Bases de Datos"<<endl;

            cout<<endl<<"Codigo de Materia que desea consultar: "; cin>>mat;
            cout<<"Ingrese su DNI sin puntos, tal cual lo ingreso en el sistema: "; cin>>docu;

            switch (mat) {

            case 1: doo.buscarAlumno(docu); 
                    break;
                    
            case 2: arq.buscarAlumno(docu); 
                    break;

            case 3: bdd.buscarAlumno(docu); 
                    break;
            }

        break;
        }
    
        case 4: cout<<endl<<"Hasta pronto!"; exit(0);
        
        default: cout<< "Opcion inválida. Selecciona la opcion 1, 2, 3 o 4."<<endl; break; 
        }

    } while (opcion != 4);

return 0;

}