#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "lib.h"

//brindar ---> para brindar primero debemos saludarnos
//despedir ---> para despedirnos primero tenemos que salurdos
//despedir ---> antes de despedirnos primero brindamos



int main()
{
    int num1;
    int num2;
    int numero;

    /*int suma;
    int resta;
    int multiplicacion;
    int division;

    int factorial;*/

    char seguir = 's';
    char confirma;

    do
    {
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);

        printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);

        switch(menu())
        {
        case 'a':
            printf("La suma es: %d\n", suma(num1,num2));
            break;
        case 'b':
            printf("La resta es: %d\n", resta(num1,num2));
            break;
        case 'c':
            printf("La multiplicación es\n", multiplicacion(num1,num2));
            //getch();
            break;
        case 'd':
            if( num2 != 0)
            {
                printf("La division es %d\n", division(num1,num2));
            }
            else
            {
                printf("La division entre 0 no es valida. Ingrese otro numero\n");
            }
            break;
        case 'e':

            printf("El factorial 1 es: %d\n", factorial(num1));

            printf("El factorial 2 es %d\n", factorial(num2));

            break;

        case 'f':
            printf("Confirma salida?:");
            fflush(stdin);
            scanf("&c", &confirma);
            if(confirma == 's')
            {
                seguir = 'n';
            }
            break;
        default:
            printf("Opcion invalida!!!\n");
            //break;
        }
        system("pause");

    }
    while( seguir == 's');

    return 0;
}
