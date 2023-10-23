#include<stdio.h>
void main(){
	int n,s[n],i,a,count=0,t=0;
	printf("Enter the no. of digit for  no. in n");
	scanf("%d",&n);
	printf("Enter a no. of digit in a %d",n);
	scanf("%d",&a);
	t=a;
	while(t!=0){
		t=t/10;
		count++;
	}
	if(count!=n){
		printf("invalid no. of digit");
	}
	else{
		for(i=0;i<n;i++){
			s[i]=a%10;
			a=a/10;
		}
		for(i=n-1;i>=0;i--){
			if(s[i]==1){
				printf("one");
			}
			if(s[i]==2){
				printf("two");
			}
			if(s[i]==3){
				printf("three");
			}
			if(s[i]==4){
				printf("four");
			}
			if(s[i]==5){
				printf("five");
			}
			if(s[i]==6){
				printf("six");
			}
			if(s[i]==7){
				printf("seven");
			}
			if(s[i]==8){
				printf("eight");
			}
			if(s[i]==9){
				printf("nine");
			}
			if(s[i]==0){
				printf("zero");
			}
			
		}
	
	
	
	
	
	
	
	
	
	
	
	}
	
}
