#include<stdio.h>
void main(){
	int a=0,b=1,c=0,n;
	scanf("%d",&n);
	while(c<n){
		c=a+b;
		a=b;
		b=c;
		if(c==n){
		printf("it is an armstrong no.");
		
		}
		else if(c>n){
			printf("no. is not armstrong no.");
			

			}
		}
		
		}
