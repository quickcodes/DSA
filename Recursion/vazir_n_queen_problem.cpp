#include<bits/stdc++.h>
using namespace std;

void printSolution(int arr[N][N])
{
	for(int i=0; i<N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf(" %d ", arr[i][j] );
		}
		printf("\n");
	}
}

bool isSafe(int arr[][], int row, int col)
{
	int i,j;
	for (i = 0; i<col; i++)
	{
		if(arr[row][i])
			return false;
	}

	for (i = row, j = col; i >= 0 && j >= 0; i--,j--)
	{
		if(arr[i][j])
		{
			return false;
		}
	}

	for(i = row, j = col; j>= 0 && i < N; i++, j--)
	{
		if arr[i][j]
		{
			return false;
		}
	}
	return true;
}

bool solveNQUtil(int arr[N][N], int col)
{
	(col >= N) ? return true;
	for(int row = 0; row < N, row++)  
	{
		if(isSafe(arr[][], row, col))
		{
			arr[row][col] = 1;
			if(solveNQUtil(arr, col + 1))
			{
				return true;
			}
			board[row][col] = 0;
		}
	}
}

bool solveNQ()
{
	int arr[N][N] = { { 0, 0, 0, 0 }
					  { 0, 0, 0, 0 }
					  { 0, 0, 0, 0 }
					  { 0, 0, 0, 0 } };

	if(solveNQUtil(board,0) == false)
	{
		printf("Solution Does not exists\n");
		return false;
	}

	printSolution(board);
	return true;
}

int main(int argc, char const *argv[])
{
	solveNQ();
	return 0;
}