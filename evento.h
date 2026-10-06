#ifndef EVENTO_H
#define EVENTO_H

#include <string>
#include <iostream>
#include <vector>

//#include "artista.h"
//#include "localizacion.h"

using namespace std;

class Artista;
class Localizacion;

class Evento
{
public:
//Constructores y destructor
    Evento();
    Evento(Artista *cantante, Localizacion *lugar, string fecha, float precio, bool vip, int entradasDisponibles);
    ~Evento();
//Getters y setters
    Artista* getArtista();
    void setArtista(Artista *cantante);
    Localizacion* getLocalizacion();
    void setLocalizacion(Localizacion *lugar);
    string getfecha();
    void setfecha(string fecha);
    float getprecio();
    void setprecio(float precio);
    bool getvip();
    void setvip(bool vip);
    int getentradasDisponibles();
    void setentradasDisponibles(int entradasDisponibles);
private:
    Artista * _cantante;
    Localizacion * _lugar;
    string _fecha;
    float _precio;
    bool _vip;
    int _entradasDisponibles;
};

#endif // EVENTO_H
