#include<stdio.h>

int main() {

int a, b;
printf("enter a and b:");
scanf("%d %d", &a, &b);

int c;
c=a;
a=b;
b=c;
printf("a and b :%d and %d \n", a, b);

    return 0;
}