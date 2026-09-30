#pragma once

class Punto
{
private:
    float x, y;

public:
    Punto (float xInicial, float yInicial);
    void setX(float nueva_x);
    void setY(float nueva_y);
    float getX();
    float getY();
    float calcularDistancia(Punto otroPunto);
    void mover(float deltaX, float deltaY);
};
