#include<stdio.h>
#include<stdlib.h>
main()
{
	
	struct node{
		int data;
		struct node*next;
	};
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	
	head = (struct node*)malloc(sizeof(struct node));
	second =(struct node*)malloc(sizeof(struct node));
	third =(struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	
	
void printliste(struct node*n){
	while( n != NULL){
		printf("%d __",n->data);
		n = n->next;
		
	}
	
	
}
	
	printliste(head);
	return 0;
	
}
