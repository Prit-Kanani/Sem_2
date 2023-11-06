//Find maximum and minimum between two numbers using function.
#include<stdio.h>
void find(int a,int b);
void main() {
  int a,b;
  scanf("%d %d",&a,&b);
  find(a,b);
}
void find(int a,int b){
	int max =a>b?a:b;
	int min =a<b?a:b;
	printf("The max no. is : %d",max);
	printf("\nThe min no. is : %d",min);
}
