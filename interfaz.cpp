#include "interfaz.h"

Interfaz::Interfaz() {}

// Crear un nuevo usuario
void Interfaz::crearUsuario(Usuario* usuario) {
    _usuarios.push_back(usuario);
}

// Eliminar un usuario específico
void Interfaz::eliminarUsuario(Usuario* usuario) {
    for (auto it = _usuarios.begin(); it != _usuarios.end(); ++it) {
        if (*it == usuario) {
            _usuarios.erase(it);
            break;
        }
    }
}

// Crear un nuevo evento
void Interfaz::crearEvento(Evento* evento) {
    _eventos.push_back(evento);
}

// Eliminar un evento específico
void Interfaz::eliminarEvento(Evento* evento) {
    for (auto it = _eventos.begin(); it != _eventos.end(); ++it) {
        if (*it == evento) {
            _eventos.erase(it);
            break;

        }
    }
}
