#pragma once

class Triangulo
{
private:
    float longitud[3];

public:
    float getLado(int numero);
    void setLado(int numero, float valor);
    int getTipo();
    bool isEscaleno();
    bool isIsosceles();
    bool isEquilatero();
};
