
#include<stdio.h>
void main(){ 
int c=0;
int	a,b;		
	int array2d[19][20]={
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	};
	for (a=0;a<19;a++){
	for (b=0;b<20;b++){	
		c++;
		array2d[a][b]=c;
	printf ("%d ", array2d[a][b]);}
	printf("\n");}
}	
