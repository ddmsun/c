#include<stdio.h>
int x (int a){	
	if (a<=0){
		return 0; 
	}
return a+x(a-1);
}
void main(){	
int b;
scanf("%d",&b);
printf ("%d",x(b));
}
