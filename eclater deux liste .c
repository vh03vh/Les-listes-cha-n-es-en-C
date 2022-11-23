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
		int x;
		struct liste *t4;
		struct liste * t5;
		struct liste *noveau;
	
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
	P =tete;  

	while (P != NULL ){
			t4 = NULL;
			t5= NULL;
		
		noveau = (struct liste *)malloc(sizeof(struct liste));
		noveau ->val = P->val ;
		P =P ->suiv;
		if(noveau->val % 2 == 0){
		  t4= noveau->suiv;
		 noveau	= t4 ;
		}else{
		t5 = noveau->suiv ;
			t5 = noveau;
			
		}
		
		
	}
}
