#include<stdio.h>
void main(){
	int n,i;
	scanf("%d\n\n",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		
		printf("\n%d",*(a + i));
	}
 		
}


