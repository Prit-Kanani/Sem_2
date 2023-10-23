#include<stdio.h>
void main(){
	int a[1000],i=-1,ev=0,od=0,n=1;
	while(n!=0){
		i++;
		printf("Enter the interger(if enterd no. is 0 then loop will break)  :");
		scanf("%d",&n);
		a[i]=n;
		if(a[i]%2==0){
			ev++;
		}
		else{
			od++;
		}
		
	}
	printf("even no. given is ;%d\n",ev);
	printf("odd no. given is ;%d\n",od);
	
	
	
	
	
	
}
