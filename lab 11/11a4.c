#include<stdio.h>
void main(){
	int a,b,i,t;
	scanf("%d",&a);
	scanf("%d",&b);
	t=a;
	for(i=1;i<b;i++){
		a=a*t;
		
	}
	if(a==0&&b==0){printf("this input is not valid");
	}
	if(a!=0&&b==0){printf("1");
	}
	if(a==0&&b!=0){printf("0");
	}
	if(a!=0&&b!=0){printf("%d",a);
	}
	
	
}
