#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <string>
#include <iostream>
#include <vector>

#include "usuario.h"
#include "evento.h"

using namespace std;

class Interfaz
{
public:
    Interfaz();

    // Métodos para usuarios
    void crearUsuario(Usuario* usuario);
    void eliminarUsuario(Usuario* usuario);

    // Métodos para eventos
    void crearEvento(Evento* evento);
    void eliminarEvento(Evento* evento);

private:
    vector<Usuario*> _usuarios; // vector de usuarios
    vector<Evento*> _eventos;   // vector de eventos
};

#endif // INTERFAZ_H
