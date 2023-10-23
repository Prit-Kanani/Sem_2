#include<stdio.h>
void main(){
	int i,n,o3=0;
	printf("Enter the no. of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		
		printf("Enter the element :");
		scanf("%d",&a[i]);
		
		if(a[i]%3==0){
			o3++;
		}
		
	}
	printf("\nThe no. of elements which is divisibal by 3 is %d",o3);
}
