//find whether a number is prime or not using while loop
#include<stdio.h>
void main(){
	int a,b=2,count=0;
	scanf("%d",&a);
	while(b<a){
	
	if(a%b==0){
		printf("it is not prime");
		count++;
		break;
		
	}
	b++;}
	if(count==0){
		printf("it is prime");
	}
	
}
