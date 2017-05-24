#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, suma, promedio;

    printf ("Ingrese primer valor a calcular: ");
    scanf ("%i", &num1);
    printf ("ingrese segunfo valor a calcular: ");
    scanf ("%i", &num2);
    printf ("Ingese tercer valor a calcular: ");
    scanf ("%i", &num3);
    printf ("Ingrese cuarto valor a calcular: ");
    scanf ("%i", &num4);
    printf ("\n");
    suma=num1+num2+num3+num4;
    promedio=suma/4;
    printf ("La suma de los cuatro valores es: ");
    printf ("%i", suma);
    printf ("\n");
    printf ("\n");
    printf ("El promedio de los cuatro valores es: ");
    printf ("%i", promedio);
    getchar ();
    return 0;
}
