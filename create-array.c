#include "matrix.h"
/**
 * create_matrix - create a matrix
 * @r: number of rows
 * @c: number pf columns
 * Return: pointre to a matrix
 */
int **create_matrix(int r, int c)
{
    int **m = (int **)malloc(sizeof(int *) * r);
    if (m == NULL)
        return NULL;
    for (int i = 0; i < r; i++)
    {
        m[i] = (int *)malloc(sizeof(int) * c);
        if (m[i] == NULL)
            return NULL;
        for (int j = 0; j < c; j++)
        {
            printf("Enter m[%d][%d] ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    return m;
}