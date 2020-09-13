#include "lib.h"

char menu(){
    char opcion;

        system("cls");

        printf("*** Menu de Opciones ***\n\n");
        printf("a Sumar\n");
        printf("b Restar\n");
        printf("c Multiplicar\n");
        printf("d Dividir\n");
        printf("d Salir\n\n");
        printf("Ingrese opcion: ");
        fflush(stdin);
        /*scanf("%c", &opcion);
        opcion = tolower(opcion);*/
        opcion = tolower(getchar());

    return opcion;
}

int suma(int num1, int num2){
    int resultadoSuma;

    resultadoSuma = num1 + num2;

    return resultadoSuma;
}

int resta(int num1, int num2){
    int resultadoResta;

    resultadoResta = num1 - num2;

    return resultadoResta;
}

int multiplicacion(int num1, int num2){
    int resultadoMultiplicacion;

    resultadoMultiplicacion = num1 + num2;

    return resultadoMultiplicacion;
}

int division(int num1, int num2){
    int resultadoDivision;

    resultadoDivision = num1 / num2;

    return resultadoDivision;
}

int factorial(int n){
    int fact;

    fact = n * factorial(n-1);

    return fact;
}

