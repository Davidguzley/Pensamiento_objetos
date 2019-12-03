#include "intercambios.h"

using namespace std;


//==========================================================================================================================================

/*Clase para incribir semestre a alumno*/

class Semestre
{
private://ATRIBUTOS
    int optativa,bloque,materia;
public://METODOS
    Semestre() {}; //constructor
    void costo_semestre();
    void intercambio();
    void setSemestre(int,int,int);
    int getoptativa();
    int getbloque();
    int getmateria();
};

//==========================================================================================================================================

void Semestre::intercambio() //COMPOCISION de Programa_internacional
{
    string irintercambio;
    cout<<"\n¿Quieres ir de intercambio? "<<endl;
    cin>>irintercambio;
    if (irintercambio=="si")
    {
        string certificado,pais,aerolinea;
        cout<<"\nEscribe de que idioma tienes certificado ";
        cin>>certificado;
        cout<<"¿A que pais deceas irte de intercambio ";
        cin>>pais;
        cout<<"Escribe cual es la aerolinea que deseas tomar ";
        cin>>aerolinea;
        Programa_internacional viajeintercambio;
        viajeintercambio.setPrograma_internacional(certificado,pais,aerolinea);
        viajeintercambio.viaje();
    }
    else
    {
        cout<<"\n¡GRACIAS HASTA LA PROXIMA!"<<endl;
        cout<<"\nSESION FINALIZADA"<<endl;
    }
}

void Semestre::costo_semestre() //Te da el costo de tu semestre
{
    int _costo_semestre;
    _costo_semestre =  ((optativa*3)+(bloque*1)+(materia*2)) * 6000;
    cout<<"\nEl costo de tu semestre es: "<<_costo_semestre<<endl;
}

void Semestre::setSemestre(int _optativa,int _bloque,int _materia)
{
    optativa = _optativa;
    bloque = _bloque;
    materia = _materia;
}

int Semestre::getoptativa()
{
    return optativa;
}

int Semestre::getbloque()
{
    return bloque;
}

int Semestre::getmateria()
{
    return materia;
}

//==========================================================================================================================================
