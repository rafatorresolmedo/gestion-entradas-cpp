#include "artista.h"

Artista::Artista() : Usuario()
{
    _nombre="";
    _estilo="";
    _descripcion="";
}
Artista::Artista(string nombreUsuario, string contrasena, string nombre, string estilo, string descripcion) : Usuario(nombreUsuario, contrasena)
{
    _nombre=nombre;
    _estilo=estilo;
    _descripcion=descripcion;
}
Artista::~Artista()
{

}
//Metodos
void Artista::crearEvento(Evento* evento)//funcion que crea un evento
{

}
void Artista::modificarEvento(Evento* evento)//funcion que modifica un evento
{

}
void Artista::eliminarEvento(Evento* evento)//funcion que elimina un evento
{

}
void Artista::verEventos() //habiendo usado polimorfismo de la funcion ver eventos, aqui si que se usa
{

}
//Getters y setters
string Artista::getnombre()
{
    return _nombre;
}
void Artista::setnombre(string nombre)
{
    _nombre=nombre;
}
string Artista::getEstilo()
{
    return _estilo;
}
void Artista::setEstilo(string estilo)
{
    _estilo=estilo;
}
string Artista::getDescripcion()
{
    return _descripcion;
}
void Artista::setDescripcion(string descripcion)
{
    _descripcion=descripcion;
}
