#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Usuario
{
public:
//Constructores y destructor
    Usuario();
    Usuario(string nombreUsuario,string contrasena);
    virtual ~Usuario();
//Metodos
    bool comprobarContrasena(string contrasena);
    virtual void verEventos()=0; //metodo virtual puro
//Getters y setters
    string getnombreUsuario();
    void setnombreUsuario(string nombreUsuario);
    string getcontrasena();
    void setcontrasena(string contrasena);
protected:
    string _nombreUsuario;
    string _contrasena;
};

#endif // USUARIO_H
