#include<stdio.h>
void main(){
	int x,y,t;
	int *ptrx,*ptry;
	scanf("%d",&x);
	scanf("%d",&y);
	ptrx=&x;
	ptry=&y;
	t=ptrx;
	ptrx=ptry;
	ptry=t;
	
	printf("\n%d\t%d",*ptrx,*ptry);
	
	
}
