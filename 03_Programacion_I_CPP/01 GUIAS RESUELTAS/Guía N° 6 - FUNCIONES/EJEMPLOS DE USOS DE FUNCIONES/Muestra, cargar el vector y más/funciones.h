#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///PROTOTIPOS
void cargarVector(int v[5], int tam);
void mostrarVector(int v[], int tam);
int buscarMaximo(int v[], int tam);
int buscarMinimo(int v[], int tam);
///FIN DE PROTOTIPOS


void cargarVector(int *v,int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout<<"Ingrese el valor " <<i+1 <<" del vector: ";
        cin>>v[i];
    }
}

void mostrarVector(int *v,int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout<<"EL VALOR " <<i+1 <<" DEL VECTOR ES: " <<v[i]<<endl;
    }
}

int buscarMaximo(int *v, int tam)
{
    int maximo;
    for(int i=0; i<tam; i++)
    {
        if(i==0)
        {
            maximo=v[i];
        }
        else if(v[i]>maximo)
            maximo=v[i];
    }

    return maximo;
}

int buscarMinimo(int *v, int tam)
{
    int posMinimo;
    for(int i=0; i<tam; i++)
    {
        if(i==0)
        {
            posMinimo=v[i];
        }
        else if(v[i]<posMinimo)
        {
            posMinimo=v[i];
        }
    }
    return posMinimo;
}

#endif // FUNCIONES_H_INCLUDED
