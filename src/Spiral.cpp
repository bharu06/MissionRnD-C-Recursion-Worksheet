/*
Write a program to generate elements of a matrix in spiral order.
Store the generated elements in single dimensional array and return that array.

Directions for Spiral are : Go Right ,Go Down ,Go Left, Go Up
Ex:

Matrix:
1	2	3
4	5	6
7	8	9

Spiral order:
1	2	3	6	9	8	7	4	5

Given matrix is a two dimensional array(input_array) with dimensions rows, columns.
If rows, columns are invalid then return NULL.
If input_array is NULL then return NULL.

Example Input :
int board[2][3]={
				 {4,6,7},
				 {1,3,8}
				};
spiral(2,2,(int **)board); // Rows followed by columns followed by board

Example Output : Return an array consisting of {4,6,7,8,3,1};

Note : Check the function Parameters ,Its a double pointer .

*/


#include "stdafx.h"
#include<stdlib.h>
#include<stdio.h>

int * spiral_rec(int rows, int columns, int **in, int left, int up, int * a, int index)
{
	if (up>rows||left>columns)
	{
		return a;
	}
	else if (rows == 1 && columns > 1)
	{
		for (int i = left; i < columns; i++)
		{
			a[index++] = in[rows-1][i]; //printf("%d", in[rows-1][i]);
			 up++;
			 left++;
		}
		return a;
	}
	else if (columns == 1 && rows > 1)
	{
		for (int i = up; i <rows; i++)
		{
			a[index++] = in[i][columns-1]; printf("%d", in[i][columns-1]);
			 up++; left++;
		}
		return a;
	}
	else
	{
		int i, j;
		for (i = left; i < columns; i++)
		{
			a[index++] = in[left][i];
			//printf("%2d", in[left][i]);
		}
		i--; up++;
		for (j = up; j < rows; j++)
		{
			a[index++] = in[j][i];
			//printf("%2d", in[j][i]);
		}
		j--; i--;
		for (i; i >= left; i--)
		{
			a[index++] = in[j][i];
			//printf("%2d", in[j][i]);
		}
		i++; j--; left++;
		for (j; j >= up; j--)
		{
			a[index++] = in[j][i];
			//printf("%2d", in[j][i]);
		}

		return spiral_rec(rows-1, columns-1, in, left, up, a, index);

		
	}
	
}
int * spiral(int rows, int columns, int **in)
{
	

	

	if (in == NULL || columns <= 0 || rows <= 0)
	{
		 return NULL;
	}
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			printf("%2d", in[i][j]);
		}
		printf("\n");
	}
	int * a = (int *)malloc(sizeof(int)*(rows*columns));
	/*for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			printf("%2d", in[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < rows*columns; i++)
	{
		//printf("%2d", a[i]);
	}*/
	a = spiral_rec(rows, columns, in, 0, 0, a, 0);
	return a;
	//return spiral_rec(rows, columns, in, 0, 0, a, 0);
}