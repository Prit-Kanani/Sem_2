#include<stdio.h>
void main(){
	int x=12;
	int *ptr;
	ptr=&x;
	printf("The value is : %d\n",*ptr);
	printf("The addrese is : %d",ptr);
}
