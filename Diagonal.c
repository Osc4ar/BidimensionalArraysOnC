#include <stdio.h>
#include <stdlib.h>

void fill(int **m, int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i + j < n)
				m[i][j] = (i + j) + 1;
			else
				m[i][j] = (n - i) + ((n - 1) - j);
		}
	}
}

void print(int **m, int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", m[i][j]);
		}
		puts("\n");
	}
}

int main()
{
	int n, c;
	int **m;
	puts("Ingresa el tamaño de la matriz nxn:\n");
	scanf("%d", &n);
	m = (int **) malloc(n*sizeof(int*));
	
	for(c = 0; c < n; c++)
		m[c] = (int *) malloc(n*sizeof(int));

	puts("\n");
	fill(m, n);
	print(m, n);
}
