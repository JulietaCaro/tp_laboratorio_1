#include <stdio.h>
#include <stdlib.h>
#include "funcionesmatematicas.h"

int main()
{
    float primerNumero; //Almacena el primer operando digitado por el usuario.
    float segundoNumero; //Almacena el segundo operando digitado por el usuario.
    int opcion; //Almacena la opcion que se desea realizar del menu de opciones.
    int realizarOperacion; // Variable bandera.

    // Las siguientes son variables para guardar los resultados de las operaciones.
    float respuestaSuma;
    float respuestaResta;
    float respuestaDivision;
    float respuestaMultiplicacion;
    float respuestaFactorialPrimerN;
    float respuestaFactorialSegundoN;

    primerNumero = 0; //Inicialización de los operandos pedidos, bandera y opción en cero.
    segundoNumero = 0;
    opcion = 0;
    realizarOperacion = 0;

    do
    {
        // Se muestra el menu de opciones, en el cual el usuario elegirá que opción desea hacer.
        printf("***** MENU DE OPCIONES *****");
        printf("\n\nEliga una de estas opciones");
        printf("\n1. Ingrese el primer numero");
        printf("\n2. Ingrese el segundo numero");
        printf("\n3. Calcular todas las operaciones");
        printf("\n4. Mostrar resultados");
        printf("\n5. Salir\n");

        printf("\nQue opcion desea realizar?: "); //Se pide que se ingrese el numero de opcion a realizarse.
        scanf("%d", &opcion);
        fflush(stdin);

        switch (opcion) //Depende de la opcion elegida por el usuario se realizaran los siguientes cases:
        {
            case 1: //Se pide el primer operando.
                printf("\nIngrese el primer operando: ");
                scanf("%f", &primerNumero);
                printf("\nPrimer operando guardado");
                break;

            case 2: //Se pide el segundo operando.
                printf("\nIngrese el segundo operando: ");
                scanf("%f", &segundoNumero);
                printf("\nSegundo operando guardado");
                break;

            case 3: //Se llama a las funciones y se le asigna el resultado de estas a las variables declaradas anteriormente. Se resuelven las operaciones.
                respuestaSuma = suma(primerNumero, segundoNumero);
                respuestaResta= resta (primerNumero, segundoNumero);
                respuestaDivision = division (primerNumero, segundoNumero);
                respuestaMultiplicacion = multiplicacion (primerNumero, segundoNumero);
                respuestaFactorialPrimerN = factorial (primerNumero);
                respuestaFactorialSegundoN = factorial (segundoNumero);

                realizarOperacion = 1;
                printf("\nSe calcularon todas las operaciones para %2.f y %2.f\n", primerNumero, segundoNumero);
                break;

            case 4: //Se muestran los resultados de las operaciones o alguna falla.

                if(realizarOperacion==1) //Cuando todas las operaciones se realizaron se muestran el resultado de la suma y resta.
                {
                    printf("\n El resultado de la suma es %0.f", respuestaSuma);
                    printf("\n El resultado de la resta es %0.f", respuestaResta);

                    if (segundoNumero == 0) //Si el segundo operando ingresado es cero no se podra dividir por este.
                    {
                        printf("\n No se puede dividir por 0");
                    }
                    else //Si el segundo operando no es cero se informa el resultado.
                    {
                       printf("\n El resultado de la division es %.2f", respuestaDivision);
                    }

                    //Se muestra el resultado de la multiplicacion y los factoriales.
                    printf("\n El resultado de la multiplicacion es %0.f", respuestaMultiplicacion);

                    if(primerNumero<0 && segundoNumero<0)
                    {
                        printf("\n No existe el factorial de numeros negativos");
                    }
                    else
                    {
                        printf("\n El factorial del primer operando es %0.f", respuestaFactorialPrimerN);

                        printf("\n El factorial del segundo operando es %0.f\n", respuestaFactorialSegundoN);
                    }

                }
                else //Si no se realizaron los resultados aparecerá error.
                {
                    printf("\nError, no se pudieron realizar las operaciones");
                }
                break;

            case 5: //Opción para salir.
                break;

            default: //Se informa que la opcion elegida no existe.
                printf("\nLa opcion es incorrecta");
        }
    }
   while(opcion!=5);

   return 0;
}
//Fin.
