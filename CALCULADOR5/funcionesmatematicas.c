int suma (float x, float y)
{
    int suma;
    suma = x+y;
    return suma;
}

int resta (float x, float y)
{
    int resta;
    resta = x-y;
    return resta;
}

float division (float x, float y)
{
    float division;
    division = x/y;
    return division;
}

int multiplicacion (float x, float y)
{
    int multiplicacion;
    multiplicacion = x*y;
    return multiplicacion;
}

long int factorial (float x)
{
    int i;
    long int contador;
    contador = 1;

    for(i = 1; i <= x; i++)
    {
        contador = contador*i;
    }
    return contador;
}

