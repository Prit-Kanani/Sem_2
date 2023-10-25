#include<stdio.h>
void main() {
	int a,b,m;
	
	printf("Enter A Number :");
	scanf("%d",&a);
	printf("Enter B Number :");
	scanf("%d",&b);
	printf(",1 For + \n,2 For -\n,3 for * \n,4 For / \n");
	scanf("%d",&m);
	
	if(b==0){
	 printf("Cannot Divide By Zero");
}
	 if(m==1){
	 	printf("%d",a+b);
	 }
	 else if(m==2){
	 	printf("%d",a-b);
	 }
	 else if(m==3){
	 	printf("%d",a*b);
	 }
	  else if(m==4){
	 	printf("%d",a/b);
	 
}
	 else{
	 	printf("Invalid oprator ");
	 }
}
 
