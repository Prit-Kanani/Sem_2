//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
#include <stdio.h>
void main() {
    int n,i=1,sum=0,s;
    printf("Enter the range of number(Limit):");
    scanf("%d",&n);
    while(i<=n)
    {
    	s=i*i;
    	sum=sum+s;
        i++;
    }
     printf("%d\n",sum);
}
