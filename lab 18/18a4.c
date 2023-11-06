//Return the maximum of three floating-point numbers.
#include<stdio.h>
void find(double,double,double);
void main() {
  double a,b,c;
  scanf("%lf %lf %lf",&a,&b,&c);
  find(a,b,c);
}
void find(double a,double b,double c){
	double max =a>b?(a>c)?a:c:(b>c)?b:c;
	printf("The max no. is : %lf",max);

}
