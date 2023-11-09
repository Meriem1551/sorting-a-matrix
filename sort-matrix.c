#include "matrix.h"

/**
 * sort_matrix - sort a matrix using insertion sort
 * @r: number of rows
 * @c: nuùber of columns
 * Return: void
 */
void sort_matrix(int r, int c, int **m)
{
    int check;

    for (int j = 0; j < r; j++)
    {
        check = check_line(j, c, m);
        if (check)
        {
            ins_sort(j, c, m);
        }
    }
}