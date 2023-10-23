#include<stdio.h>
void main(){
	int x,y;
	int *ptrx,*ptry;
	scanf("%d",&x);
	scanf("%d",&y);
	ptrx=&x;
	ptry=&y;
	printf("\nThe sum of two number using pionter is : %d",*ptrx+*ptry);
	
		
	
}
