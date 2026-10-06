#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <string>
#include <iostream>
#include <vector>

#include "usuario.h"
//#include "evento.h"
//#include "entrada.h"
//#include "artista.h"

using namespace std;

class Entrada; //Declaracion adelantada
class Evento;
class Artista;

class Asistente : public Usuario
{
public:
//Constructores y destructor
    Asistente();
    Asistente(string nombreUsuario, string contrasena, string dni, float cartera);
    ~Asistente();
//Metodos
    void comprarEntrada(Evento* evento); //funcion que devuelve true o false dependiendo si compra entrada o no
    void venderEntrada(Entrada* entrada); //funcion que devuelve true o false dependiendo si vende entrada o no
    void verEventos(); //funcion que imprime por pantalla los eventos
//Getters y setters
    string getDNI();
    void setDNI(string dni);
    float getCartera();
    void setCartera(float cartera);
protected:
    string _dni;
    float _cartera;
    vector <Entrada*> listaEntradas;

};

#endif // ASISTENTEVIP_H
