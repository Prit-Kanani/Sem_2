#include<stdio.h>
void main(){
	int a,b,c;
    printf("Enter Val of a=");
    scanf("%d",&a);
    printf("Enter Val of b=");
    scanf("%d",&b);
    printf("Enter Val of c=");
    scanf("%d",&c);
    if(a>b&&a>c)
	{
    printf("a is largest");
	}
   else if(b>a&&b>c)
	{
    printf("b is largest");
	}
	else if(c>a&&c>b)
	{
    printf("c is largest");
	}   
}

