#include <stdio.h>
#include <stdlib.h>

float sumarNumero(float numeroUnoSuma, float numeroDosSuma);
float restarNumero(float numeroUnoResta, float numeroDosResta);
float multiplicacionNumero(float numeroUnoMultiplicacion, float numeroDosMultiplicacion);
//float divisionNumero(float numeroUnoDivision, float numeroDosDivision);

int main()
{
    float num1;
    float num2;
    float suma;
    float resta;
    float multiplicacion;
   // float division;
    printf("ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%d", &num2);
    suma = sumarNumero(num1, num2);
    resta = restarNumero(num1, num2);
    multiplicacion = multiplicacionNumero(num1, num2);
   // division = divisionNumero(num1, num2);
    printf("El resultado de la suma es: %f\n",suma);
    printf("El resultado de la resta es: %f\n",resta);
    printf("El resultado de la multiplicacion es: %f\n",multiplicacion);
   // printf("El resultado de la division es: %.2f",division);
    system("pause > nul");
    return 0;
}


float sumarNumero(float numeroUnoSuma, float numeroDosSuma)
{
    float x, y;

    x=numeroUnoSuma;
    y=numeroDosSuma;

    return x+y;

}

float restarNumero(float numeroUnoResta, float numeroDosResta)
{
    float w, z;

    w=numeroUnoResta;
    z=numeroDosResta;

    return w-z;
}

float multiplicacionNumero(float numeroUnoMultiplicacion, float numeroDosMultiplicacion)
{
    float a, b;

    a=numeroUnoMultiplicacion;
    b=numeroDosMultiplicacion;

    return a*b;
}

float divisionNumero(float numeroUnoDivision, float numeroDosDivision)
{
    float c, d;

    c=numeroUnoMultiplicacion;
    d=numeroDosMultiplicacion;

    return c/d;
}*/
