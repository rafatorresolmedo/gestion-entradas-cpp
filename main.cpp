#include <iostream>
#include <string>
#include <vector>
#include"menu.h"
#include"usuario.h"
#include"evento.h"
#include"entrada.h"
#include"localizacion.h"
#include"asistente.h"
#include"asistentevip.h"
#include"artista.h"
#include"administrador.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    // Crear localización
    Localizacion* localizacion1 = new Localizacion("Bernabeu", "Madrid", 80000);

    // Crear artista
    Artista* artista = new Artista("Mvrk", "mvrk123456", "Mvrk", "Pop", "Cantante madrileño emergente");

    // Crear evento
    Evento* evento = new Evento(artista, localizacion1, "38/15/2025", 80.0, false, 80000); //cambiar aforo con getters y setters

    // Crear usuarios
    Asistente* asistente = new Asistente("juan14perez", "contrajuan", "12345678A", 56.0);
    AsistenteVIP* asistentevip = new AsistenteVIP("laura15_", "contralaura", "98765432B", 457.0);
    Administrador* admin = new Administrador("admin", "contraadmin");

    cout << "Asistente: " << asistente->getnombreUsuario() << ", " << asistente->getcontrasena() << ", " << asistente->getDNI() << ", " << asistente->getCartera() << endl;
    cout << "AsistenteVIP: " << asistentevip->getnombreUsuario() << ", " << asistentevip->getcontrasena() << ", " << asistentevip->getDNI() << ", " << asistentevip->getCartera() << endl;
    cout << "Admin: " << admin->getnombreUsuario() << ", " << admin->getcontrasena() << endl;
    cout << "Cantante: " << artista->getnombreUsuario() << ", " << artista->getcontrasena() << ", " << artista->getnombre() << ", " << artista->getDescripcion() << ", " << artista->getEstilo() << endl;
    cout << "Evento: " /*<< evento->get() << ", " << evento->get() << ", "*/ << evento->getfecha() << ", " << evento->getprecio() << ", " << evento->getvip() << ", " << evento->getentradasDisponibles() << endl;



    int opcion1, opcion2;
       Menu M;
       M.menu1();
       cin >> opcion1;

       switch (opcion1) {
           case 1: // Usuarios
               M.menu2();
               cin >> opcion2;
               switch (opcion2) {
                   case 1:
                       cout << "Has seleccionado: Artistas" << endl;
                       break;
                   case 2:
                       cout << "Has seleccionado: Asistentes" << endl;
                       break;
                   case 3:
                       cout << "Has seleccionado: Asistentes VIP" << endl;
                       break;
                   case 4:
                       cout << "Has seleccionado: Administradores" << endl;
                       break;
                   default:
                       cout << "Opcion invalida en menu de usuarios." << endl;
                       break;
               }
               break;
           case 2:
               cout << "Has seleccionado: Eventos" << endl;
               break;
           case 3:
               cout << "Has seleccionado: Localizaciones" << endl;
               break;
           default:
               cout << "Opcion invalida en menu principal." << endl;
               break;
       }




    return 0;
}
