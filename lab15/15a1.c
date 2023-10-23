#include<stdio.h>
void main(){
	int n;
	printf("Enter the no. of elements :");
	scanf("%d",&n);
	int a[n],b[n],i,j;
	for(i=0;i<n;i++){
		printf("Enter the elements :");
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		b[j]=a[j];
		printf("%d",b[j]);
	}
	
	
}
