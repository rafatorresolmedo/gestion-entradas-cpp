#include "localizacion.h"

Localizacion::Localizacion()
{
    _nombre="";
    _direccion="";
    _aforo=0;
}
Localizacion::Localizacion(string nombre, string direccion, int aforo)
{
    _nombre=nombre;
    _direccion=direccion;
    _aforo=aforo;
}
Localizacion::~Localizacion()
{

}

void Localizacion::reservarLocalizacion(Evento *evento, string fecha)
{

}
string Localizacion::getnombre()
{
    return _nombre;
}
void Localizacion::setnombre(string nombre)
{
    _nombre=nombre;
}
string Localizacion::getdireccion()
{
    return _direccion;
}
void Localizacion::setdireccion(string direccion)
{
    _direccion=direccion;
}
int Localizacion::getaforo()
{
    return _aforo;
}
void Localizacion::setaforo(int aforo)
{
    _aforo=aforo;
}
