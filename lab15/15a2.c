#include<stdio.h>
void main(){
	int i,n,ne=0;
	printf("Enter the no. of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		
		printf("Enter the element :");
		scanf("%d",&a[i]);
		
		if(a[i]<0){
			ne++;
		}
		
	}
	printf("\nThe no. of negetive no. in array is %d",ne);
}
