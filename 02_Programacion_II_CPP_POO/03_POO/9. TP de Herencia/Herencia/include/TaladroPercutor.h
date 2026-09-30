#pragma once
#include "Taladro.h"

class TaladroPercutor : public Taladro
{
    public:
        TaladroPercutor(float peso, float longitud, float potencia, int golpesPorMinuto);
        int getGolpesPorMinuto();
        void setGolpesPorMinuto(int golpesPorMinuto);
        void mostrarInformacion();

    private:
        int _golpesPorMinuto;
};

