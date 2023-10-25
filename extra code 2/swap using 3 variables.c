#include<stdio.h>
void main(){
	int a,b,c;
    printf("Enter Val of a=");
    scanf("%d",&a);
    printf("Enter Val of b=");
    scanf("%d",&b);
	c=b,b=a,a=c;
	printf("a=%d b=%d",a,b);
}
