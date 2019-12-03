
using namespace std;


//==========================================================================================================================================

//Clase para servicio de programas internacionales*/

class Programa_internacional
{
private://ATRIBUTOS
    string certificado_idioma, pais, aerolinea;
public://METODOS
    Programa_internacional() {}; //constructor
    void viaje();
    void setPrograma_internacional(string,string,string);
    string getcertificado_idioma();
    string getpais();
    string getaerolinea();
};

//==========================================================================================================================================

void Programa_internacional::viaje() //verifica tus datos para aprobar tu intercambio
{
    if ((certificado_idioma == "aleman")&&(pais == "Alemania"))
    {
        cout<<"\nTu viaje a "<<pais<<"con la aerolinea "<<aerolinea<<" fue aprobado"<<endl;
    }
    else if ((certificado_idioma == "ingles")&&(pais == "Inglaterra"))
    {
        cout<<"\nTu viaje a "<<pais<<" con la aerolinea "<<aerolinea<<" fue aprobado"<<endl;
    }
    else if ((certificado_idioma == "ingles")&&(pais == "USA"))
    {
        cout<<"\nTu viaje a "<<pais<<" con la aerolinea "<<aerolinea<<" fue aprobado"<<endl;
    }
    else if ((certificado_idioma == "frances")&&(pais == "Francia"))
    {
        cout<<"\nTu viaje a "<<pais<<" con la aerolinea "<<aerolinea<<" fue aprobado"<<endl;
    }
    else if ((certificado_idioma == "japones")&&(pais == "Japon"))
    {
        cout<<"\nTu viaje a "<<pais<<" con la aerolinea "<<aerolinea<<" fue aprobado"<<endl;
    }
    else if ((certificado_idioma == "portugues")&&(pais == "Portugal"))
    {
        cout<<"\nTu viaje a "<<pais<<" con la aerolinea "<<aerolinea<<" fue aprobado"<<endl;
    }
    else
    {
        cout<<"\nTu viaje a "<<pais<<" con la aerolinea "<<aerolinea<<" no fue aprobado"<<endl;
    }
}

void Programa_internacional::setPrograma_internacional(string _certificado_idioma,string _pais,string _aerolinea)
{
    certificado_idioma = _certificado_idioma;
    pais = _pais;
    aerolinea = _aerolinea;
}

string Programa_internacional::getcertificado_idioma()
{
    return certificado_idioma;
}

string Programa_internacional::getpais()
{
    return pais;
}

string Programa_internacional::getaerolinea()
{
    return aerolinea;
}

//==========================================================================================================================================
