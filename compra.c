#include<stdio.h>

int main ()
{
    float precio, pago;
    int cantidad;

    printf ("Por favor ingrese el precio del producto: ");
    scanf ("%f", &precio);
    printf ("Por favor ingrese cantidad de productos a llevar: ");
    scanf ("%i", &cantidad);
    printf ("\n");
    printf ("\n");
    pago=precio*cantidad;
    printf ("El valor a pagar es: ");
    printf ("%f", pago);
    getchar();
    return 0;

}
