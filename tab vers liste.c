#include<stdio.h>
#include<stdlib.h>
#define N = 10;

main()

{
	struct list{
int val ;
struct list*suiv ;
};
	int	t[10];
	int i;
	struct list *TETE; 
	struct list *P;
	struct list *P1;
/*pour convertire tab vers liste*/
	printf("veuillez les elements du tableau est:\n");
	for(i=0;i<10;i++){
		
		printf("t[%d]= ",i);
		scanf("%d",&t[i]);
		}
		
		TETE =  (struct list*)malloc(sizeof(struct list));
		TETE->val=t[0];
		TETE->suiv=NULL;
	TETE = P;
		for(i=0;i<10;i++){
	
		P->val=t[i];
		P1->suiv=P;
		P->suiv=NULL;
		P1=P1->suiv;
			}
			/*pour affiche les listes*/
			
				for(i=0;i<10;i++)
				printf("tab[i]");
				P=TETE;
					for(i=0;i<10;i++){
						printf("%d",P->val);
						P=P->suiv;
					}
	}
