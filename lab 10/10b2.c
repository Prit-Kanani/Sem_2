#include<stdio.h>
void main(){
	int a,b=2,flag=0;
	scanf("%d",&a);
	while(b<a){
		if(a%b==0){
			printf("no. is not prime");
			flag++;
			break;
		}
		b++;
	}
	if(flag==0){
	printf("no. is prime");
	}
}
