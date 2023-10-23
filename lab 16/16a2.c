#include<stdio.h>
void main(){
	int i,j,a[3][3],ne=0,o=0,po=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element no. a[%d][%d] :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]==0){
				o++;
			}
			else if(a[i][j]>0){
				po++;
			}
			else if(a[i][j]<0){
				ne++;
			}
		}
	}
	printf("\nThe no. of positive no. is :%d\nThe no. of negetive no. is :%d\nThe no. of zeros  is :%d",po,ne,o);
	
}
