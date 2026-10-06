#include "usuario.h"

Usuario::Usuario()
{
    _nombreUsuario="";
    _contrasena="";
}
Usuario::Usuario(string nombreUsuario,string contrasena)
{
    _nombreUsuario=nombreUsuario;
    _contrasena=contrasena;
}
Usuario::~Usuario()
{

}
bool Usuario::comprobarContrasena(string contrasena) //devuelve ttrue si son iguales sino false bool
{
    if (_contrasena == contrasena)
    {
        return true;
    }else return false;
}
string Usuario::getnombreUsuario()
{
    return _nombreUsuario;
}
void Usuario::setnombreUsuario(string nombreUsuario)
{
    _nombreUsuario=nombreUsuario;
}
string Usuario::getcontrasena()
{
    return _contrasena;
}
void Usuario::setcontrasena(string contrasena)
{
    _contrasena=contrasena;
}
