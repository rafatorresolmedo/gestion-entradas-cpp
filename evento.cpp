#include "evento.h"

Evento::Evento()
{
    _fecha="";
    _precio=0;
    _vip=false;
    _entradasDisponibles=0;
}
Evento::Evento(Artista *cantante, Localizacion *lugar, string fecha, float precio, bool vip, int entradasDisponibles)
{
    _cantante=cantante;
    _lugar=lugar;
    _fecha=fecha;
    _precio=precio;
    _vip=vip;
    _entradasDisponibles=entradasDisponibles;
}
Evento::~Evento()
{

}
//Getters y setters
Artista* Evento::getArtista()
{
    return _cantante;
}
void Evento::setArtista(Artista *cantante)
{
    _cantante=cantante;
}
Localizacion* Evento::getLocalizacion()
{
    return _lugar;
}
void Evento::setLocalizacion(Localizacion *lugar)
{
    _lugar=lugar;
}
string Evento::getfecha()
{
    return _fecha;
}
void Evento::setfecha(string fecha)
{
    _fecha=fecha;
}
float Evento::getprecio()
{
    return _precio;
}
void Evento::setprecio(float precio)
{
    _precio=precio;
}
bool Evento::getvip()
{
    return _vip;
}
void Evento::setvip(bool vip)
{
    _vip=vip;
}
int Evento::getentradasDisponibles()
{
    return _entradasDisponibles;
}
void Evento::setentradasDisponibles(int entradasDisponibles)
{
    _entradasDisponibles=entradasDisponibles;
}
