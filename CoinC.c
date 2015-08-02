
/*--------------------------------------------------------------------
FICHIER		:	COINC.C
AUTEUR     	:   	WEBMALF
--------------------------------------------------------------------*/

#include <stdio.h>

int Additionner(int Nbre1, int Nbre2);
int Soustraire(int Nbre1, int Nbre2);


int main(int argc, char *argv[], char *env[])
{
    int Nbre1 = 1;
    int Nbre2 = 2;
    printf("%d + %d = %d\n", Nbre1, Nbre2, Additionner(Nbre1, Nbre2));
    printf("%d - %d = %d\n", Nbre1, Nbre2, Soustraire(Nbre1, Nbre2));
}


int Additionner(int Nbre1, int Nbre2)
{
    return( Nbre1 + Nbre2);
}

int Soustraire(int Nbre1, int Nbre2)
{
    return( Nbre1 - Nbre2);
}