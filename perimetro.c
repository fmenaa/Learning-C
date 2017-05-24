#include<stdio.h>

int main ()
{
    int lado, perimetro;
    printf ("Por favor ingresar el valor del lado del cuadrado: ");
    scanf ("%i", &lado);
    perimetro=lado*4;
    printf ("El perimetro del cuadrado es: ");
    printf ("%i", perimetro);
    getchar();
    return 0;
}
