//Count simple interest using function.
#include<stdio.h>
void si(int p,int t,int r);
void main(){
	int p,r,t;
	printf("Enter principal : ");
	scanf("%d",&p);
	printf("Enter rate of interest : ");
	scanf("%d",&r);
	printf("Enter time : ");
	scanf("%d",&t);
	si(p,r,t);
	
}
void si(int p,int t,int r){
	
	int S.I.= (p*r*t)/100;
	printf("The simple interest is : %d",S.I.);
	
}


