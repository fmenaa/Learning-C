#include<stdio.h>
int main()
{
    int num1, num2, num3, num4, suma, producto;

    printf ("Ingresar primer numero a calcular: ");
    scanf ("%i", &num1);
    printf ("Ingresar segundo numero a calcular: ");
    scanf ("%i", &num2);
    printf ("Ingresar tercer numero a calcular: ");
    scanf ("%i", &num3);
    printf ("Ingresar cuarto numero a calcular: ");
    scanf ("%i", &num4);

    suma=num1+num2+num3+num4;
    producto=num3*num4;
    printf ("\n");

    printf ("La suma de los cuatro valores ingresados es: ");
    printf ("%i", suma);
    printf ("\n");
    printf ("El producto del tercer y cuarto valor es: ");
    printf ("%i", producto);
    getch();
    return 0;
}
