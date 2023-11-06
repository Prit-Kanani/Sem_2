//Add two numbers using function.
#include<stdio.h>
void add(int a ,int b);

void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	add(a,b);

}
void add(int a,int b){
	printf("%d",a+b);
}
