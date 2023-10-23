#include<stdio.h>
void main(){
	int j,max,min,n=1,sum=0,y;
	float avr=0;
	printf("Enter the no. of element of array  :");
	scanf("%d",&y);
	int a[y];
	for(j=0;j<y;j++){
	printf("Enter the interger:");
	scanf("%d",&a[j]);
	sum=sum+a[j];
	}
	
	max=a[0];
	min=a[0];
	for(j=0;j<y-1;j++){
		if(max<a[j+1]){
			max=a[j+1];
			
		}
		if(min>a[j+1]){
			min=a[j+1];
		}
		
		}

	
	avr=sum/y;
	printf("the max no. is :%d\n",max);
	printf("the min no. is :%d\n",min);
	printf("the sum no. is :%d\n",sum);
	printf("the avr no. is :%f\n",avr);
	

}
