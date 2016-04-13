#include "stdafx.h"
#include <stdlib.h>

#include "FunctionHeaders.h"

void generate_array(int **input_array, int rows, int columns, int seq)
{
	int k = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			input_array[i][j] = (k++)*seq;;
}

int main(){
	
	//Check NSnipers

	//Check CountPairs Sample Code 

	//Check Steps Sample Code

	//Check Spiral Sample Code
	
	int rows =10, columns =1;
	int **input_array = (int **)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++)
		input_array[i] = (int *)malloc(columns * sizeof(int));

	generate_array((int**)input_array, rows, columns,-12);
	//int *a=spiral(rows, columns, (int **)input_array);
	int maze[3][5] = {
		{ 1, 0, 0, 0, 1 },
		{ 1, 1, 0, 1, 1 },
		{ 0, 1, 1, 1, 0 }
	};

	int m = 3, n = 5;
	int x1 = 0, y1 = 0, x2 = 2, y2 = 3;
	printf("%d",path_exists((int*)maze, m, n, x1, y1, x2, y2));
	 n = 16;
	int board[16][16];
	int i = 0, j = 0;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			board[i][j] = 0;
		}
	}

	//int result = solve_nsnipers(&board[0][0], n);

	//printf("%d", result);

	//Check Maze Sample Code

	/*
	int maze[4][1] = {
		{ 1 },
		{ 1 },
		{ 1},
		{ 1 }
	};

	int m = 4, n = 3;
	int x1 =0, y1 = 0, x2 = 3, y2 = 0;

	int check=path_exists(&maze[0][0], m, n, x1, y1, x2, y2);
	printf("%d\n", check);
	*/

	
	return 0;
}