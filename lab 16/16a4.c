#include<stdio.h>
void main(){
	int i,j,a[3][3],b[3][3],ne=0,o=0,po=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element no. a[%d][%d] :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element no. b[%d][%d] :",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
		
	}
	
}
