//Swap two numbers using call by value and call by reference.
#include<stdio.h>
void swap(int,int);
void swap1(int,int);
void main(){
	int a,b;
	printf("Enter the first no. ");
	scanf("%d",&a);
	printf("Enter the first no. ");
	scanf("%d",&b);
	
	swap1(a,b);
	swap(a,b);
	
	
}
void swap1(int a,int b){
	int t;
	t=a;    
	a=b;
	b=t;
	printf("After swaping no. by value the no. are :\t%d\t%d",a,b);
}
void swap(int a,int b){
	int *aa=a;
	aa=&a;
	int *bb=b;
	bb=&b;
	int t;
		
	
	
	printf("\nAfter  swaping no. by reference the no. are :\t%d\t%d",a,b);
}

