#include<stdio.h>
void maximum(int*x,int*y,int*m){
	if(*x>*y)
	*m = *x;
	else
	*m = *y;
	
}
main()
{
	int a,b ,max;
	printf("entre le premier elet\n");
	scanf("%d",&a);
	printf("entre le deuxeme elte\n");
	scanf("%d",&b);
	maximum(&a,&b,&max);
	printf("le maximum de deux valeur est:%d",max);
	
}
