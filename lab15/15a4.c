#include<stdio.h>
void main(){
	int i,n,ne=0,m;
	printf("Enter the no. of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		
		printf("Enter the element :");
		scanf("%d",&a[i]);	
	}
	printf("\nEnter the no. to search :");
	scanf("%d",&m);
	
	for(i=0;i<n;i++){
		
		if(m==a[i]){
			printf("\nthe no. is in array");
			break;
		}
	}
	
	if(m!=a[i]){
			printf("\nthe no. is not in array");
		}
}
