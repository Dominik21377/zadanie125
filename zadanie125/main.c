#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, h, V;
    printf( "Podaj dlugosci bokow a, b i wyskokosc h prostopadloscianu: " );
    scanf( "%f%f%f", & a, & b, & h );
    V = a * (b * h);
    printf( "Objetosc: %f\n", V );
    return 0;
}
