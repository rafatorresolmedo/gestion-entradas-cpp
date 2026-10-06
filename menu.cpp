#include "menu.h"

Menu::Menu()
{

}
void Menu::menu1() {
    cout << "===== MENU PRINCIPAL =====" << endl;
    cout << "1. Usuarios" << endl;
    cout << "2. Eventos" << endl;
    cout << "3. Localizaciones" << endl;
    cout << "Seleccione una opcion: ";
}

void Menu::menu2() {
    cout << "===== MENU DE USUARIOS =====" << endl;
    cout << "1. Artistas" << endl;
    cout << "2. Asistentes" << endl;
    cout << "3. Asistentes VIP" << endl;
    cout << "4. Administradores" << endl;
    cout << "Seleccione una opcion: ";
}
