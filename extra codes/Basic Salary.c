#include<stdio.h>
void main(){
	float bs,hra,da,gs;
	printf("Enter Basic Salary");
	scanf("%f",&bs);
	
    if(bs>=30000){
    	hra=bs*0.3;
    	da=bs*0.95;
    	gs=bs+hra+da;
    	printf("%f",gs);
	}
	else if(bs>=20000){
    	hra=bs*0.25;
    	da=bs*0.9;
    	gs=bs+hra+da;
    	printf("%f",gs);
	}
	else if(bs>=10000){
    	hra=bs*0.2;
    	da=bs*0.8;
    	gs=bs+hra+da;
    	printf("%f",gs);
	}	
}
