//print the digit of given no. using while  loop
#include<stdio.h>
void main(){
	int a,b,sum=0;
	scanf("%d",&a);
	while(a>0){
		b=a%10;
		a=a/10;
		sum=sum*10+b;
	}
	while(sum>0){
		b=sum%10;
		sum=sum/10;
		printf("%d\t",b);
	}
	}
