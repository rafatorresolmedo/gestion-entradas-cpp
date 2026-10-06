#ifndef ENTRADA_H
#define ENTRADA_H

#include <string>
#include <iostream>
#include <vector>

//#include "asistente.h"
//#include "evento.h"

using namespace std;

class Evento;
class Asistente;

class Entrada
{
public:
//Constructores y destructor
    Entrada();
    Entrada(Evento* evento, float precio, Asistente* propietario);
    ~Entrada();
//Getters y setters
    float getPrecio();
    void setPrecio(float precio);
private:
    Evento* _evento;
    float _precio;
    Asistente* _propietario;
};

#endif // ENTRADA_H
