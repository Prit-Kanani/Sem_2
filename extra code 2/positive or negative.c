#include<stdio.h>
void main(){
	int a;
    printf("Enter Val of a=");
    scanf("%d",&a);
    if(a>0)
	{
    printf("a is +ve");
	}
    else if(a<0)
	{
    printf("a is -ve");
	}
    else{
    printf("a is neutral");
	}
}
