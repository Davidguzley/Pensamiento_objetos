#include "personas.h"
#include "semestres.h"

using namespace std;

//==========================================================================================================================================

/*Clase para crear alumnos*/

class Alumno : public Persona
{//Clase HIJA
    private: //ATRIBUTOS
        string campus,matricula,carrera;
    public://METODOS
        Alumno(){};
        Alumno(string,string,string,int,string,string,string);//constructor
        void mostrar_alumno();
        void inscribir();
        string getcampus();
        string getmatricula();
        string getcarrera();
};

//==========================================================================================================================================

Alumno::Alumno(string _nombre,string _apellido_paterno,string _apellido_materno,int _edad,string _campus,string _matricula,string _carrera) : Persona(_nombre,_apellido_paterno,_apellido_materno,_edad)
{//constructor CLASE HIJA
    campus = _campus;
    matricula = _matricula;
    carrera = _carrera;
}

void Alumno::inscribir(){//compocision de semestre
    string cursarsemestre;
    cout<<"\n¿Quieres ingresar un semestre? "<<endl;cin>>cursarsemestre;
    if (cursarsemestre=="si"){
        int optativa,materia,bloque;
        cout<<"\n¿Cuantas optativas llevaras? ";cin>>optativa;
        cout<<"¿Cuantas materias llevaras? ";cin>>materia;
        cout<<"¿Cuantos bloques llevaras? ";cin>>bloque;
        Semestre ciclo_escolar;
        ciclo_escolar.setSemestre(optativa,bloque,materia);
        ciclo_escolar.costo_semestre();
        ciclo_escolar.intercambio();
        cout<<"\nSESION FINALIZADA"<<endl;
    }
    else{
        cout<<"\nokey sera para la proxima"<<endl;
        cout<<"\nSESION FINALIZADA"<<endl;
    }
}

void Alumno::mostrar_alumno(){//muestra datos escolares del alumno
    mostrar_persona();
    cout<<"\nMatricula: "<<matricula<<endl;
    cout<<"\ncarrera: "<<carrera<<endl;
    cout<<"\ncampus: "<<campus<<endl;
}

string Alumno::getcampus(){
    return campus;
}

string Alumno::getmatricula(){
    return matricula;
}

string Alumno::getcarrera(){
    return carrera;
}
//==========================================================================================================================================
