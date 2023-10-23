#include<stdio.h>
void main() {
	int i=1,count=0;
	while(count<=150)
	{
		printf("%d\n",i);
		i=i+3;
		count++;
	}
	printf("%d",count);
}
