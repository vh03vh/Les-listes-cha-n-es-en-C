#include <stdio.h>
#include <stdlib.h>

#define  N =  10;
main()
{
	
	struct liste{
		int val ;
		struct liste *suiv;
	};
		struct liste *tete;
		struct liste *P;
		struct liste *P1;
		int v;
		int i;
		int pos;
	
	tete = (struct liste *)malloc(sizeof(struct liste));
			tete->val=1;
			tete->suiv=NULL;
			tete=P;
	for(i=0;i<=10;i++){
			P->val=i;
			P1->suiv=P;
			P->suiv=NULL;
			P1=P1->suiv;
	}
		/*pour affiche les listes*/
			
			
					for(i=0;i<10;i++){
						printf("%d",P->val);
						P=P->suiv;
					}
}

 
printf("quel est la position que vous voullez inserer a la ");
scanf("%d",&pos);
	for(i=0;  i<pos-2 ;i++){
	p=p->suiv;}
w=p->suiv;
p1=malloc(sizeof(struct liste));
scanf("%d",x);
p1->val=x;
p->suiv=p1;
p1->suiv=w;}
while(p!=null){
  printf("%d",p->val);
   p=p->suiv;}
