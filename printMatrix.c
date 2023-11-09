#include "matrix.h"
/**
 * print_matrix - print a matrix
 * @r: number of rows
 * @c: number of columns
 * @m: pointer to a matrix
 */
void print_matrix(int r, int c, int **m)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}