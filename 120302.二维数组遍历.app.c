#include<stdio.h>
void main(){  
int	row,column;	
	int array2d[3][4]={
		{15,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};
	for (row=0;row<3;row++){
		for (column=0;column<4;column++){
			printf ("%d ",array2d[row][column]);}
		printf("\n");
	}	
} 
