#include<stdio.h>
void main(){
	int i=0,l,c,a[1000],b[1000],sum=0,n=1,t;
	while(n!=0){
		printf("Enter no. :");
		scanf("%d",&n);
		t=n;
		if(n==0){
		break;
		}
		a[i]=n;
		
		
		while(n!=0){
			c=n%10;
			n=n/10;
			sum=sum*10+c;
		}
		b[i]=sum;
		sum=0;
		i++;
		n=t;
	}
	for(l=0;l<i;l++){
		printf("the Enterd no. is%d",a[l]);
		printf("\n");
		printf("the reverse no. is%d",b[l]);
		printf("\n");
	}
}
