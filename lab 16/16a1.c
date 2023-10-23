#include<stdio.h>
void main(){
	int i,j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element no. a[%d][%d] :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix = ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0&&j==0){
				printf("\t%d ",a[i][j]);
			}
			else{
				printf("\t\t%d ",a[i][j]);
			}
		}
		printf("\n");
	}
}
