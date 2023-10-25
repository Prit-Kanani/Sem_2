#include<stdio.h>
void main(){
	float a,b,c,d,e,n,c;
	 	printf("Enter marks :");
	 	scanf("%f %f %f %f %f ",&a,&b,&c,&d,&e);
	 	c=(a+b+c+d+e)/5.0;
	 		
	 	if(c<=35){
	 			printf("Fail");
			 }
		else if(c>=35 && c<=45){
			 		printf("Pass Class");
			 }
		else if(c>=45 && c<=60){
			 		printf("Second Class");
			 	}
	    else if(c>=60 && c<=70){
			 		printf("First Class");
			 	}
	    else if(c>=70){
			 		printf("Distinction");
				 }
}


