
using namespace std;

//==========================================================================================================================================

/*Clase para definir datos de personas*/

class Persona
{
    //Clase PAPA
protected: //ATRIBUTOS
    string nombre, apellido_paterno,apellido_materno;
    int edad;
public://METODOS
    Persona() {};
    Persona(string,string,string,int);//constructor
    string getnombre();
    string getapellido_paterno();
    string getapellido_materno();
    int getedad();
    void mostrar_persona();
};

//==========================================================================================================================================

Persona::Persona(string _nombre,string _apellido_paterno,string _apellido_materno,int _edad)
{
    //constructor CLASE PAPA
    nombre = _nombre;
    apellido_paterno = _apellido_paterno;
    apellido_materno = _apellido_materno;
    edad = _edad;
}

void Persona::mostrar_persona() //muestra datos personales de la persona
{
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"\nApellido paterno: "<<apellido_paterno<<endl;
    cout<<"\nApellido materno: "<<apellido_materno<<endl;
    cout<<"\nEdad: "<<edad<<endl;
}

string Persona::getnombre()
{
    return nombre;
}

string Persona::getapellido_paterno()
{
    return apellido_paterno;
}

string Persona::getapellido_materno()
{
    return apellido_materno;
}

int Persona::getedad()
{
    return edad;
}

//==========================================================================================================================================
