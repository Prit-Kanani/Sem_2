#include<stdio.h>
int main(){
	int n,i,t;
	printf("Enter a no:");
	scanf("%d",&n);
	t=n;
	for(i=1;i<t;i++){
	  n=n*i;
	}
	printf("%d",n);
	return 0;
}
