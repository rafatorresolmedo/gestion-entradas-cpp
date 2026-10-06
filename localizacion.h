#ifndef LOCALIZACION_H
#define LOCALIZACION_H

#include <string>
#include <iostream>
#include <vector>

#include "asistente.h"
#include "artista.h"
//#include "evento.h"

using namespace std;

class Evento; //declaracion adelantada

class Localizacion
{
public:
//Constructores y destructor
    Localizacion();
    Localizacion(string nombre, string direccion, int aforo);
    ~Localizacion();
//Metodos
    void reservarLocalizacion(Evento *evento, string fecha);
//Getters y setters
    string getnombre();
    void setnombre(string nombre);
    string getdireccion();
    void setdireccion(string direccion);
    int getaforo();
    void setaforo(int aforo);
private:
    string _nombre;
    string _direccion;
    int _aforo;
    vector<Evento*> _eventosReservados;
};

#endif // LOCALIZACION_H
