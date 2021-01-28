#include <stdio.h>
#include <stdlib.h>

char menu( void );
void objetosc_prostopadloscianu( void );
void objetosc_ostroslupa( void );


void objetosc_prostopadloscianu( void )
{
    float a, b, h, V;
    printf( "Podaj dlugosci bokow a, b i wyskokosc h prostopadloscianu: " );
    scanf( "%f%f%f", & a, & b, & h );
    V = a * (b * h);
    printf( "Objetosc: %f\n", V );
    return 0;
}

void objetosc_ostroslupa( void )
{
    float a, h, V;
    printf( "Podaj dlugosc boku a i wyskokosc h ostroslupa: " );
    scanf( "%f%f", & a, & h );
    V = (a * a * h) / 3.0;
    printf( "Objetosc: %f\n", V );
    return 0;
}

int main()
{
    char wybor;
    while( 1 )
    {
        wybor = menu();
        switch( wybor )
        {
        case 'a': objetosc_prostopadloscianu();
            break;
        case 'b': objetosc_ostroslupa();

            default: menu();
        }
    }
}

char menu( void )
{
    char w;

    puts( "Oblicz:" );
    puts( "a) objetosc prostopadloscian" );
    puts( "b) objetosc ostroslupa prawidlowego czworokatnego" );


    scanf( " %c", & w );
    return w;
}
