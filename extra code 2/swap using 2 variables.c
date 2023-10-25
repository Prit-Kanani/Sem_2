#include<stdio.h>
void main(){
	int a,b;
    printf("Enter Val of a=");
    scanf("%d",&a);
    printf("Enter Val of b=");
    scanf("%d",&b);
	a=a*b,b=a/b,a=a/b;
	printf("a=%d b=%d",a,b);
}
