 #include<stdio.h>
 void main(){
 	int a,b,c,d,e,f;
 	scanf("%d",&a);
 	scanf("%d",&b);
 	scanf("%d",&c);
 	scanf("%d",&d);
 	scanf("%d",&e);
 	
 	f = (a+b+c+d+e)/5;
 	if(f<35){
 		printf("fail");
	 }
 	else if(f>=35&&f<45){
 		printf("pass");
	 }
 	else if(f>=45&&f<60){
 		printf("second class");
	 }
	 else if(f>=60&&f<70){
 		printf("first");
	 }
	 else if(f>=70){
 		printf("distinction");
	 }
	 else{
	 	printf("invalide marks");
	 }
 }
