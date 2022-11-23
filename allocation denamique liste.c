#include<stdio.h>
#include<stdlib.h>
int main()
{
char *p; /* allocation statique d'une var ( p ) de type pointeur */
p = malloc( sizeof(char) ); /* allocation dynamique d'une var de même
taille qu'un caractère : sizeof(type) retourne le
nb d'octets nécessaire pour représenter une var
de ce type */
*p = 'A'; /* utilisation indirecte de la var dynamique */
free(p); /* destruction de la var dynamique */
return 0;
}
