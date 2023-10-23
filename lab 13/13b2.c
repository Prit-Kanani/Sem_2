#include<stdio.h>
void main(){
	int i,j,k=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(k==0){
				k++;
				printf("1");
			}
			else{
				k--;
				printf("0");
			}
			
		}
		printf("\n");
		
	}
	
	
	
	
	
}
