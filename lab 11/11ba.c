#include<stdio.h>
void main(){
	int a=0,b=1,c,i,d;
	scanf("%d",&d);
	
	if(d==1){
	printf("0");
	}
	
	else if(d==2){
	printf("0,1");
	}
	
	else{
		printf("0,1,");
		for(i=3;i<=d;i++){
			c=a+b;
			printf("%d,",c);
			a=b;
			b=c;
			
			}
	}
	
}
