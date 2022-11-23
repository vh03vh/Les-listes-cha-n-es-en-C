#include<stdio.h>
#include<stdlib.h>


int main(){
	struct liste
{
int val ;
struct liste *suiv ;
};

struct liste *tete;
struct liste *a;
struct liste *b;
struct liste *c;

	/* TODO (#1#): new */
 	tete=(  struct liste* ) malloc ( sizeof(struct liste ));
	a =(  struct liste *) malloc ( sizeof(struct liste ));
  	b= ( struct liste *) malloc ( sizeof(struct liste ));
	c= (  struct liste*) malloc ( sizeof(struct liste ));
	 
	tete->val = 12;
	tete->suiv= a;
	a->val = 7;
	a->suiv= b;
	b->val = 3;
	b->suiv= c;
	c->val = 9;
	c->suiv= NULL;
	

}
