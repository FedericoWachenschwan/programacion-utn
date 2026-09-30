#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Cadena
{
private:
    char *_cadena;
    int _tam;

public:
    ///CONSTRUCTOR:
    Cadena(const char *texto="NADA")
    {
        _tam=strlen(texto)+1;
        _cadena=new char[_tam];
        if(_cadena==nullptr)exit(1);
        strcpy(_cadena,texto);
        _cadena[_tam-1]='\0';
    }

    ///DESTRUCTOR:
    ~Cadena(){delete []_cadena;}

    ///GETTERS:
    int getTamanio(){return _tam;}
    const char *getP(){return _cadena;}

    ///OTROS MÉTODOS:
    void Mostrar()
    {
        cout<< _cadena <<endl;
    }

    ///a)
    void agregarCaracter(char letra)
    {
        char *cadena_auxiliar;

        cadena_auxiliar = new char [_tam + 1];

        if (cadena_auxiliar==nullptr) exit(1);

        strcpy(cadena_auxiliar, _cadena);

        cadena_auxiliar[_tam - 1] = letra;
        cadena_auxiliar[_tam] = '\0';

        delete [] _cadena;

        _cadena = cadena_auxiliar;

        _tam += 1;
    }

    ///b)
    void aMayusculas()
    {
        for (int i=0; i<_tam; i++)
        {
            if (_cadena[i] >= 'a' && _cadena[i] <= 'z')
            {
                _cadena[i] -= 32;
            }
        }
    }

    ///c)
    void aMinusculas()
    {
        for (int i=0; i<_tam; i++)
        {
            if (_cadena[i] >= 'A' && _cadena[i] <= 'Z')
            {
                _cadena[i] += 32;
            }
        }
    }

    ///d)
    int encontrarCaracter(char caracter)
    {
        int pos;

        for(int i=0; i<_tam; i++)
        {
            if (caracter == _cadena[i])
            {
                pos = i;
                return pos;
            }
        }

        return -1;
    }

    ///e)
    char encontrarCaracterConPosicion(int posicion)
    {

        if (posicion < _tam - 1 && posicion >= 0)
        {
            return _cadena[posicion];
        }

        return -1;
    }

    ///f)
    void primeraMayuscula()
    {
        if (_cadena[0] >= 'a' && _cadena[0] <= 'z')
        {
            _cadena[0] -= 32;
        }
    }
};
