#pragma once
#include <string>

using namespace std;

class Usuario
{
private:
    string nombre;
    string clave;
    string rol;

public:
    Usuario(string nombre, string clave, string rol);
    string getNombre();
    string getClave();
    string getRol();
    void setNombre(string nuevo_nombre);
    void setClave(string nueva_clave);
    void setRol(string nuevo_rol);

};
