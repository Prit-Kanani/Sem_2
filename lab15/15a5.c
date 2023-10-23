#include<stdio.h>
#include<string.h>
void main(){
	int i,n=0;
	char a[1000];
	gets(a);
	for(i=0;a[i]!='\0';i++){
		n++;
	}
	printf("\nthe string is :%s\nthe length of string is :%d",a,n);
	
}
