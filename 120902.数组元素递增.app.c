#include<stdio.h>
void main(){ 
int c=0;
int	a,b;		
	int array2d[9][10]={
		{0,0,0,0,0,0,0,0,0,0},
	};
	for (a=0;a<9;a++){
	for (b=0;b<10;b++){	
		c++;
		array2d[a][b]=c;
	printf ("%d ", array2d[a][b]);}
	printf("\n");}
			
		}
