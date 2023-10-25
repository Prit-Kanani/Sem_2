#include<stdio.h>
void main() {
	int a,b,c,d;
	printf("Enter Value Of A :");
	scanf("%d",&a);
	printf("Enter Value Of B :");
	scanf("%d",&b);
	printf("Enter Value Of C :");
	scanf("%d",&c);
	d=(a>b)?printf("%d",a*c):printf("%d",b*c);
}

