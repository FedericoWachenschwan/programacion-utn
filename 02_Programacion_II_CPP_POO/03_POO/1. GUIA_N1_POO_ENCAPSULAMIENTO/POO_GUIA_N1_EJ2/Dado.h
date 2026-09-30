#pragma once

class Dado
{
private:
    int valor;

public:
    Dado();
    void lanzar();
    int getValor();
    bool esMaximo();
    bool esMinimo();
};
