#include<stdio.h>
#include<stdlib.h>
void insertion(struct liste*l, int val ,int pos){
	struct liste *p;
	struct liste *k ; 

	p = (struct liste *)malloc (sizeof(struct liste)) ;
	if ( pos != 1 && k-> suiv != NULL ){
	
	while ( int i <=  pos-1){
		
			k=k->suiv;
			 int i++;
			p->suiv= k->suiv ;
			k->suiv = p;
		
	                  	}
	
	}
	
	
	
	
	
}
main()
{
	struct liste {
		int val;
		struct liste *suiv;
		
	};
	struct liste*tete;
	struct liste*P;
	struct liste*P1;
	int x;
	
	
	tete = (struct liste *)malloc (sizeof(struct liste));
			tete->val=1;
			tete->suiv=NULL;
			tete=P;
	for(i=0;i<=10;i++){
			P->val=i;
			P1->suiv=P;
			P->suiv=NULL;
			P1=P1->suiv;
	}
	printf ("please entre la valeur de x");
	scanf("%d",& x);
	scanf ("%d", &pos);
	insertion(struct liste*tete, x ,int pos);
	
};
