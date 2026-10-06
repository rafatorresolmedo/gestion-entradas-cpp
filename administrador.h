#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <string>
#include <iostream>
#include <vector>

#include"usuario.h"

using namespace std;

class Administrador : public Usuario
{
public:
//Constructores y destructor
    Administrador();
    Administrador(string nombreUsuario, string contrasena);
    ~Administrador();
//Metodos
    void crearUsuario(Usuario* usuario);
    void modificarUsuario(Usuario* usuario);
    void eleminarUsuario(Usuario* usuario);
    void verEventos() override;
};

#endif // ADMINISTRADOR_H
