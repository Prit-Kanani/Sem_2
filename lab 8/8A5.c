#include <stdio.h>
void main() {
	int i=0,n,oddcount=0,evencount=0;
	while(i<=10){
		printf("Enter a %d Number :",i);
		scanf("%d",&n);
		if(n%2==0){
			evencount=-evencount+1;
		}
		else{
			oddcount=oddcount+1;
		}
		i++;
	}
	printf("even count number is %d",evencount);
	printf("odd count number is %d",oddcount);
}
