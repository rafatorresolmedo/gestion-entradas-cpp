#ifndef ASISTENTEVIP_H
#define ASISTENTEVIP_H

#include <string>
#include <iostream>
#include <vector>

#include "asistente.h"
#include "entrada.h"

using namespace std;

class Entrada;

class AsistenteVIP : public Asistente
{
public:
//Contructores y destructor
    AsistenteVIP();
    AsistenteVIP(string nombreUsuario, string contrasena, string dni, float cartera);
    ~AsistenteVIP();
//Metodos
    void comprarEntrada(Entrada entrada);
    void venderEntrada(Entrada entrada);
    void verEventos(); //nose si hace falta que la tenga como tmb la tiene asistente
};

#endif // ASISTENTEVIP_H
