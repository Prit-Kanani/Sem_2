#include<stdio.h>
void main(){
	int a[1000],i=-1,po=0,ne=0,n=1;
	while(n!=0){
		i++;
		printf("Enter the interger(if enterd no. is 0 then loop will break)  :");
		scanf("%d",&n);
		a[i]=n;
		if(a[i]>=0){
			po++;
		}
		else{
			ne++;
		}
		
		
		
		
		
	}
	printf("positive no. given is ;%d\n",po);
	printf("negetive no. given is ;%d\n",ne);
	
	
	
	
	
	
}
