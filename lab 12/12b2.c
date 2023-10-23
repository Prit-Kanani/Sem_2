#include<stdio.h>//e=2 + 1/2! + 1/3! + ...
void main(){
	int n,i,e=0,j,t=0;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		t=i;
		e=1/(for(j=1;j<i;j++){t=t*j;});
	}
	e=e+2;
	printf("\napprox value of e by given no. is%d;",e);
	
	
}
