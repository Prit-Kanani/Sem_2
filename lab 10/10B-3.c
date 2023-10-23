//print the digit of given no. using while  loop
#include<stdio.h>
void main(){
	int a,b,sum=0,c;
	scanf("%d",&a);
	c=a;
	while(a>0){
		b=a%10;
		a=a/10;
		sum=sum*10+b;
	}
	if(sum==c){
		pirntf("no.is palindrome");
	}
	else{
		printf("no. is not palindrome");
	}
	}
