//Print sum of 1 to n numbers
#include<stdio.h>
void main() {
	int i=1,n,m=0;
	printf("Enter Value Of N :");
	scanf("%d",&n);
	while(i<=n)
	{
	m=m+i;
	i++;
	}
	printf("%d",m);
}

