#include<stdio.h>
void main(){
	int i,j,k,m,a[3][3],b[3][3],f[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element for a[%d][%d] :",i+1,j+1);
				scanf("%d",a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element for b[%d][%d]",i+1,j+1);
				scanf("%d",b[i][j]);
	}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++){
				for(m=0;m<3;m++){
					f[k][m]=a[i][k]+b[m][j];
				}
			}
	}
	}
}
