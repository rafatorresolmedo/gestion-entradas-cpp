#include "asistente.h"

Asistente::Asistente() : Usuario()
{
    _dni="";
    _cartera=0;
}
Asistente::Asistente(string nombreUsuario, string contrasena, string dni, float cartera) : Usuario(nombreUsuario,contrasena)
{
    _dni=dni;
    _cartera=cartera;
}
Asistente::~Asistente()
{

}
//Metodos
void Asistente::comprarEntrada(Evento* evento)//funcion que devuelve true o false dependiendo si compra entrada o no
{

}
void Asistente::venderEntrada(Entrada* entrada)//funcion que devuelve true o false dependiendo si vende entrada o no
{

}
void Asistente::verEventos() //funcion que imprime por pantalla los eventos
{

}
//Getters y setters
string Asistente::getDNI()
{
    return _dni;
}
void Asistente::setDNI(string dni)
{
    _dni=dni;
}
float Asistente::getCartera()
{
    return _cartera;
}
void Asistente::setCartera(float cartera)
{
    _cartera=cartera;
}
