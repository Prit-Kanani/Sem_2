#include<stdio.h>
void main(){
	int *ptr;
	float *ptr1;
	char *ptr2;
	double *ptr3;
	int x=1;
	char y='A';
	double z=1212;
	float w=34.34;
	ptr=&x;
	ptr1=&w;
	ptr2=&y;
	ptr3=&z;
	printf("%d\n%f\n%c\n%lf\n",*ptr,*ptr1,*ptr2,*ptr3);
	printf("\n%d\n%d\n%d\n%d\n",ptr,ptr1,ptr2,ptr3);
	
}
