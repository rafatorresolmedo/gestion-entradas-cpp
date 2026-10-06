#include "entrada.h"

Entrada::Entrada()
{
//    _evento=evento;
    _precio=0;
//    _propietario=propietario;
}
Entrada::Entrada(Evento* evento, float precio,Asistente *propietario)
{
    _evento=evento;
    _precio=precio;
    _propietario=propietario;
}
Entrada::~Entrada()
{

}
float Entrada::getPrecio()
{
    return _precio;
}
void Entrada::setPrecio(float precio)
{
    _precio=precio;
}
