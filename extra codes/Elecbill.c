#include<stdio.h>
void main() {
	int unit;
	float cost;
	
	printf("Enter Unit :");
	scanf("%d",&unit);
	 
	if(unit<=50) {
	cost = unit*0.5;
	}
	else if(unit<=150){
	cost = 50*0.5+(unit-50)*0.75;
    }
    else if(unit<=250){
    cost = 50*0.5+100*0.75*(unit-150);
	}
	else
	{
		cost=50*0.5+100*0.75+100*1.20+(unit-250)*1.50;
	}
	cost=cost*0.2;
	printf("Total Cost :%2f\n",cost);
}

