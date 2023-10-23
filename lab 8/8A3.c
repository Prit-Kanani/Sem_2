//Print numbers between two given numbers which is divisible by 2
inclu#de<stdio.h>
void main() {
	int i=0,a,b;
	printf("Enter Value Of A :");
	scanf("%d",&a);
	printf("Enter Value Of B :");
	scanf("%d",&b);
	i=a;
	while(i>=a && i<=b)
	{
	if(i%2==0){
		printf("%d\n",i);
	}
	i++;
 }
}
