#include<stdio.h>
#include<stdlib.h>

main()
{
	struct Maillon
{
int val ;
struct Maillon *suiv ;
};



struct Maillon*tete;
tete =(struct Maillon *) malloc( sizeof( struct Maillon) );
tete->val=5;
tete-> suiv =NULL;

void printliste(struct Maillon*t){
	while(t != NULL){
	
	printf("%d",t->val);
		t = t->suiv; 
		}
	}
}
