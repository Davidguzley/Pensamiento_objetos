/*
Titulo          : proyecto.cpp
Descripcion     : Programa orientado para el servicio de alumnos del Tecnologico de Monterrey
                  en donde pueden ingresar y buscar su informacion,
                  costo de semestre y opciones de programa internacional.
Autor           : DAVID GUZMAN LEYVA A01706417
=============================================================================================
*/


//BIBLIOTECAS
#include <iostream>//para imprimir
#include "alumnos.h"


using namespace std;//para no seguir utilizando std



//CODIGO PRINCIPAL
int main(){

    //Instanciamos la clase Alumno
    string nombre,apellidop,apellidom,campus,matricula,carrera;
    int edad;
    cout<<"\n¿Cual es tu nombre? ";cin>>nombre;
    cout<<"¿Cual es tu apellido paterno? ";cin>>apellidop;
    cout<<"¿Cual es tu apellido materno? ";cin>>apellidom;
    cout<<"¿Cual es tu edad? ";cin>>edad;
    cout<<"Escribe tu campus ";cin>>campus;
    cout<<"¿Cual es tu matricula? ";cin>>matricula;
    cout<<"¿Cual es tu carrera? ";cin>>carrera;

    Alumno persona(nombre,apellidop,apellidom,edad,campus,matricula,carrera);

    persona.mostrar_alumno();
    persona.inscribir();


    /*alumno persona("David",Guzman,Leyva,18,"QRO","A01706417","ITC");
    persona.mostrar_datos();*/

    /*semestre ciclo_escolar;
    ciclo_escolar.setsemestre(1,5,5);
    ciclo_escolar.costo_semestre();*/

    /*programa_internacional viaje_alemania;
    viaje_alemania.setprograma_internacional("Aleman","Alemania","aeromexico");
    viaje_alemania.viaje();*/

    return 0;
}
