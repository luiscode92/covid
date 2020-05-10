#include <stdio.h>
#include <stdlib.h>

void add_person(int **matrix, int x, int y, int n);
void print_matrix(int **matrix, int n);
int **create_matrix(int n);
void add_random_person(int **matrix, int n);



int main(void) {

  int **matrix;
  int  n = 10, i = 0, j = 0, k = 0;


  printf("Insert value of n to create a matrix\n");
  scanf("%d", &n);

  matrix = create_matrix(n);


  print_matrix(matrix, n);
  //add_person(matrix, 5, 5, n);
  add_random_person(matrix, n);
  return 0;
}

void add_person(int **matrix, int x, int y, int n)
{
  matrix[x][y] = 1;
  printf("added person \n");
  print_matrix(matrix, n);
}

void print_matrix(int **matrix, int n)
{
  int i , j;

  printf("****************************\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("*****************************\n");
}

int **create_matrix(int n)
{
  int i = 0, j = 0, k = 0;
  int **matrix = NULL;

  matrix = malloc(n * sizeof(int *));

  for (i = 0; i < n; i++)
        {
                matrix[i] = malloc(n * sizeof(int));
                if (matrix[i] == NULL)
                {
                        for (k = 0; k < i; k++)
                        {
                                free(matrix[k]);
                        }
                        free(matrix);
                        return (0);

                }
                for (j = 0; j < n; j++)
                {
                        matrix[i][j] = 0;
                }
        }

  print_matrix(matrix, n);
  return matrix;
}

void add_random_person(int **matrix, int n)
{
        int p = rand() % n*n;
        int i = 0;
        int x, y;
        while(i < p)
        {
                x = rand() % n;
                y = rand() % n;
                matrix[x][y] = 1;
                i++;
        }
        printf("added random person\n");
        print_matrix(matrix, n);
}

void validation(int **matrix, int n)
{
	int x = 2;
	int y = 3;
	int c = 2;
	int i, j;
	
	for (i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{	
			valY(j, i, matrix, x, y, c);
			valX(j, i, matrix, x, y, c);
		}
	}
}

int valY(int x0, int y0,int **matrix, int c)
{
	int 
}
 
}
