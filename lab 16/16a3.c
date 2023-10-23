#include<stdio.h>
void main(){
	int i,j,a[20][2],n=0;
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(n==0){
			printf("Enter the roll no. a[%d][%d] :",i+1,j+1);
			scanf("%d",&a[i][j]);
			n++;
			}
			else if(n==1){
			printf("Enter the marks a[%d][%d] :",i+1,j+1);
			scanf("%d",&a[i][j]);
			n--;
			}
		}
	}
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
