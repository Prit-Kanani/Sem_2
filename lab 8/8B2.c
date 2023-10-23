#include<stdio.h>
void main() {
	int i=100;
	while(i<=200){
	if(i%7==0 && i%5!=0){
	printf("%d divisebal by 7 and 5\n",i);
	}
	else{
	printf("%d Not divisebal by 7 and 5\n",i);
   }
   i++;
  }
}

