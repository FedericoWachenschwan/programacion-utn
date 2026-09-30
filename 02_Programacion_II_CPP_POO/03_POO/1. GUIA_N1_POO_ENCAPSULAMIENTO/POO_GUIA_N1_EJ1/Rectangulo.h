#pragma once

class Rectangulo
{
private:
    int base, altura; ///ATRIBUTOS

public:
    int calcularArea();
    int calcularPerimetro();
    int getBase();
    int getAltura();
    void setBase(int nuevaBase);
    void setAltura(int nuevaAltura);

};

