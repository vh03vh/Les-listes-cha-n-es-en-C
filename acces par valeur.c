#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
main()
{
	struct liste{
		int val;
		struct liste *suiv;
	}; 
	struct liste *P;
	struct liste *tete;
	int s; 
	int x,i;
	int n=5;
	int c;
	
	
	printf(" tapez la valeur de x\n");
	P = ( struct liste *)malloc(sizeof(struct liste));
	scanf("%d",&x);
	P->val = x;
	P->suiv = NULL;
	tete = P;
	for( i =0;i<n;i++){
		printf("entre la valuer de x svp \n");
		scanf("%d",&x);
		P->suiv = (struct liste*)malloc (sizeof(struct liste));
		 P = P->suiv;
		 P->val =x;
		 P->suiv = NULL;
}
		P = tete ;
		printf("la liste contient est :\n");
		while( P != NULL){
		 printf("%d__", P->val);
		  P= P->suiv;
		} 
		
		printf (" \n donner la valeur de s svp\n");
		scanf("%d",&s);

	
		P=tete;

		if( P != NULL && P->val ==  s){
		
		P =	P->suiv;
			c++;
	}	
		printf(" l occurence de valeur de %d est: %d",s,c);
 }
	

	

