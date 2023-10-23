#include<stdio.h>
void main(){
	int t=0,i,j,x=1,y=1,z;
	scanf("%d",&x);
	scanf("%d",&y);
	z=x;
	for(i=1;i<=y;i++){                 
		for(j=1;j<x;j++){
		t=t+z;
			}
		z=t;
		}
	if(x==1){
		printf("1");
	}
	else if (x==0&&y==0){
		printf("invalid term");
	}
	else if (x==0){
		printf("0");
	}
	else if (y==0){
		printf("1");
	}
	
	else{printf("%d",t);
	}
}
