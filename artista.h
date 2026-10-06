#ifndef ARTISTA_H
#define ARTISTA_H

#include <string>
#include <iostream>
#include <vector>

#include "usuario.h"
//#include "evento.h"

using namespace std;

class Evento; //Declaracion adelantada

class Artista : public Usuario
{
public:
//Constructores y destructor
    Artista();
    Artista(string nombreUsuario, string contrasena, string nombre, string estilo, string descripcion);
    ~Artista();
//Metodos
    void crearEvento(Evento* evento);//funcion que crea un evento
    void modificarEvento(Evento* evento);//funcion que modifica un evento
    void eliminarEvento(Evento* evento);//guncion que elimina un evento
    void verEventos();//habiendo usado polimorfismo de la funcion ver eventos, aqui si que se usa
//Getters y setters
    string getnombre();
    void setnombre(string nombre);
    string getEstilo();
    void setEstilo(string estilo);
    string getDescripcion();
    void setDescripcion(string descripcion);
protected:
    string _nombre;
    string _estilo;
    string _descripcion;
    vector<Evento*> Eventos;
};

#endif // ARTISTA_H
