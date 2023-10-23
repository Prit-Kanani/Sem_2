#include<stdio.h>
void main(){
	int a,i=1;
	scanf("%d",&a);
	for(;i<=10;i++){
		
		if(i==10){
			printf("%d\n",i);
		}
		else{
			printf("%d\t",i);
		}
	}
	for(i=1;i<=a;i++){
		printf("%d\n",i);
	}


}
