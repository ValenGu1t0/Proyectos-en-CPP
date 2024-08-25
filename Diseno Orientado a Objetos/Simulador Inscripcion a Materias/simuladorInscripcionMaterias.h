#include <iostream>
#include <string>      
#include <vector>
#include <stdlib.h>

using namespace std;


///////////////////////////////// CLASES /////////////////////////////////

class Alumno {

    private:
    int dni;                        // DNI Alumno
    string nombre, mail;            // Nombre y mail de alumno

    public:
    Alumno(int, string, string);    // Constructor ALUMNO
    string getNombre();
    int getDocumento();
};

class Materia {

    private:
    int cuatrimestre, codigo;       // 1er o 2o Cuatrimestre, codigo de materia
    string nombre;                  // Nombre de la materia       
    vector<Alumno>inscriptos;       // Lista de alumnos --->> inscriptos -> debe crearse un objeto en main para cada materia

    public:
    Materia(int, int, string);
    void enrolarAlumno(Alumno);     // Toma un objeto como parametro
    void listarAlumnos();
    void buscarAlumno(int);         // toma parametro?   --> Si esta el alumno True, si no False
};


///////////////////////////////// CONSTRUCTORES /////////////////////////////////

// Constructor de Alumno
Alumno :: Alumno (int doc, string name, string email) {
    dni = doc;
    nombre = name;
    mail = email;
}

// Constructor de Materias
Materia :: Materia (int cuatri, int code, string name) {
    cuatrimestre = cuatri;
    codigo = code;
    nombre = name;
}


///////////////////////////////// METODOS /////////////////////////////////

////////// METODOS ALUMNO //////////
string Alumno :: getNombre() {

    return nombre;
}

int Alumno :: getDocumento () {

    return dni;
}

////////// METODOS MATERIA //////////
void Materia :: enrolarAlumno(Alumno a) {

    inscriptos.push_back(a);
}

void Materia :: listarAlumnos() {

    for (auto alumno : inscriptos) {

        cout<<alumno.getNombre()<<endl;
    }
}


void Materia :: buscarAlumno(int docux) {
    
    bool encontrado = false; 

    for (auto alumno : inscriptos) {

        if (alumno.getDocumento() == docux) {
            encontrado = true;
            break; 
        }
    }

    if (encontrado) {
        cout<<endl<<"Usted está inscripto en esta materia."<<endl <<endl;
    } else {
        cout<<endl<<"Usted no está inscripto en esta materia."<<endl<<endl;
    }
}

