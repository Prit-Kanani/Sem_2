#include<stdio.h>
void main(){
	char m;
	printf("Enter Character :");
	scanf("%c",&m);
    if(m>='a' && m<='z'){
    	printf("Character is lowercase");
	}
	else if(m>='A' && m<='Z'){
    	printf("Character is Uppercase");
	}
    else if(m>='0' && m<='9'){
    	printf("Digits");
	}
	else{
		printf("Spiceal Character");
	}
}
