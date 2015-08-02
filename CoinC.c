
/*--------------------------------------------------------------------
FICHIER		:	COINC.C
AUTEUR     	:   	WEBMALF
--------------------------------------------------------------------*/

#include <stdio.h>
#include "CoinC.h"



int main(int argc, char *argv[], char *env[])
{
    int Nbre1 = 3;
    int Nbre2 = 2;
    printf("%d + %d = %d\n", Nbre1, Nbre2, Additionner(Nbre1, Nbre2));
    printf("%d - %d = %d\n", Nbre1, Nbre2, Soustraire(Nbre1, Nbre2));
    printf("%d * %d = %d\n", Nbre1, Nbre2, Multiplier(Nbre1, Nbre2));
    printf("%d / %d = %d\n", Nbre1, Nbre2, Diviser(Nbre1, Nbre2));
}


int Additionner(int Nbre1, int Nbre2)
{
    return( Nbre1 + Nbre2);
}

int Soustraire(int Nbre1, int Nbre2)
{
    return( Nbre1 - Nbre2);
}

int Multiplier(int Nbre1, int Nbre2)
{
    return( Nbre1 * Nbre2);
}

int Diviser(int Nbre1, int Nbre2)
{
    return( Nbre1 / Nbre2);
}
