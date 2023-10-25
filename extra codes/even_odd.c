# include<stdio.h>

//write a programme to check if a number is evn or odd 
// even for 1 and odd for 0

int main() {
      int x;
      printf("enter number:");
      scanf("%d", &x);
      printf("%d \n", x % 2 == 0);
      printf("even for 1 and odd for 0");
      return 0;
}    
