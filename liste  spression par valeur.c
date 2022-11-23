#include<stdio.h>
#include<stdlib.h>
void supprimer( struct liste *tete , int x){

	struct liste{
		int val;
		struct liste*suiv;
	};
	if(tete != NULL){
		if( tete->val == x){

		 struct liste *temp =tete ;
		tete = tete->suiv;
		free (temp);
				}
		
	}
	
	
	
}
main()
{
	struct liste{
		int val;
		struct liste*suiv;
	};
	struct liste *tete;
	struct liste *p;
	struct liste *p1;
	int 	resulta ,i,v,s ;
	
	tete = (struct liste*)malloc(sizeof(struct liste));
	tete->val  = v;
	tete->suiv = NULL;
	p= tete;
	for(i=0;i<10;i++){
		p->val =i;
		p1->suiv = p;
		p->suiv=NULL;
		p1=p1->suiv;
	}
	printf("please entre la valeur de s");
	scanf ("%d",&s);
	
	supprimer(p, s);
	
	for( i= 0; i<=10;i++){
		printf("%d ",p->val);
	p= 	p->suiv;
		
	}
	
	
}
