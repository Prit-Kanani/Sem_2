#include<stdio.h>
void main(){
	int i,a[5],b[5],co=0;
	for(i=0;i<5;i++){
		printf("Enter the hight of person in c.m. :");
		scanf("%d",&a[i]);
		printf("Enter the weight of person k.g.:");
		scanf("%d",&b[i]);
		if(a[i]>170&&b[i]<50){
			co++;
		}
		
	}

	printf("the no. of people of whose hight greater then 170 and weight less then 50 is%d",co);
}
