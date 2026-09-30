#pragma once

class Termometro
{
private:
    float temperatura;
    char unidad;

public:
    Termometro(float tempInicial, char unidadInicial);
    float getTemperatura ();
    void setTemperatura (float temperatura);
    void cambiarUnidad (char nuevaUnidad);
    char getUnidad();
};
