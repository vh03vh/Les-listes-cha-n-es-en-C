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
		int x; int c; 
		
	
		int i;
		int N=5;
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
			 P = P->suiv;
			P->val=x;
			P->suiv=NULL;
	
	}
		/*pour affiche les listes*/
			P= tete;
			
						printf( "le liste contient \n");
						while(  P != NULL){
				
						printf("%d__",P->val);
						P=P->suiv;
						
						
							}
			P= tete;
			c = 0;				
	while( P != NULL){
		
			c++;
			P=P->suiv;

	}
	printf("\n la long de liste est :%d",c);
}
