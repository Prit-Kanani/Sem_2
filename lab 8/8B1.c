//Print number and its square root for 0 to 9
#include<stdio.h>
#include<math.h>
void main() {
	int a=1;
	float b;
	printf("Enter Number");
	scanf("%d",&a);
    while(a<=9)
    {
    	b=sqrt(a);
    	printf("%f",b);
    	a++;
	}
}
