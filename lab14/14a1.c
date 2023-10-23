#include<stdio.h>
void main(){
	int a[999999],i=0,n=1;
	while(n!=0){
		printf("Enter the no.if enterd no. is 0 then loop will break.");
		scanf("%d",&n);
		a[i]=n;
		i++;
	}
	i--;
	while(i>=0){
		printf("%d",a[i]);
		printf("\t");
		i--;
	}
	
	
	
	
	
	}
	
	
	
	
	

