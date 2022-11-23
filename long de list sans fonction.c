#include<stdio.h>
#include<stdlib.h>
main()
{
	struct liste{
		int val ;
		struct liste *suiv;
	};
	struct liste *tete;
	struct liste *P;
	struct liste *P1;
	int d;
	int i;
int resultat;
	
	tete = (struct liste *)malloc(sizeof (struct liste ));
	tete->val=1;
	tete->suiv=NULL;
	tete = P;
for(i=0;i<=10;i++){
	P->val=i;
	P1->suiv=P;
	P->suiv=NULL;
	P1=P1->suiv;
	
}
for(i=0;i<=10;i++){
	
	printf("%d",P->val);
		P=P->suiv;
}
	while( tete != NULL){
	
	d++;
	
	}
		printf("la long de liste est :%d",d);
return ;
}
