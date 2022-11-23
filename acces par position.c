#include<stdio.h>
#include<stdlib.h>

void recherche_position(P   , int R){
		struct liste{
		int val ;
		struct liste *suiv;
	};
	struct liste *tete;

	P = tete;
	int cpt=0;
	while(P != NULL  && cpt <R){
		 P= P->suiv;
		 cpt= cpt +1;
		 if(P != NULL){
		 	printf("%d",P->val);
		 }else{
		 	printf ("inexistant pas");
		 }
	}

	
	
}


main()
{
	
	struct liste{
		int val ;
		struct liste *suiv;
	};
		struct liste *tete;
		struct liste *P;
		int x;
	int pos;
		int i, N=5;
		
	printf("entre la valeur de x :\n");
	scanf("%d", &x);
	P= (struct liste *)malloc(sizeof(struct liste));
			P->val=x;
			P->suiv=NULL;
			tete=P;
	for(i=0;i<N;i++){
			printf("entre la valeur de x :\n");
	scanf("%d", &x);
		P->suiv=(struct liste *)malloc(sizeof(struct liste));
			 P =	 P->suiv;
			P->val=x;
		
			P->suiv=NULL;
	
	}
		/*pour affiche les listes*/
			P= tete;
			
						printf( "le liste contient \n");
						while(  P != NULL){
				
						printf("%d__",P ->val);
						P=P->suiv;
						}
	printf (" entre le valeur de x ");
scanf("%d",&pos);


        recherche_position(P,pos);
}
