#include<stdio.h>
void main(){
	int a,i=1,sum=0;
	scanf("%d",&a);
	while(i<a){
		if(a%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==a){
		printf("no. is perfect");
	}
	else{
		printf("no. is not perfect");
	}
}
