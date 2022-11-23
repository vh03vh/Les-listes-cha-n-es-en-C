#include<stdio.h>
void suppremierrecursif(liste *& tete, int x){
	if (tete != NULL){
		if(tete.val==x){
		liste  * tmp =tete;
			tete=tete.suiv;
			delete tmp;
		}
		else suppremierrecursif(tete.suiv,x);
	}
	
}
