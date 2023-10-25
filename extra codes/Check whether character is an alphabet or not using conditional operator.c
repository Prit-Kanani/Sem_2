#include<stdio.h>
void main() {
	char ch;
	printf("Enter Vchlue Of ch :");
	scanf("%c",&ch);
   (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')?printf("Alphabet"):printf("Not Alphabet");
}
