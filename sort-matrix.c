#include "matrix.h"

/**
 * sort_matrix - sorts a matrix aftre checking each line
 * @r: number of rows
 * @c: nuùber of columns
 * Return: void
 */
void sort_matrix(int r, int c, int **m)
{
    for (int j = 0; j < r; j++)
    {
        if (check_line(j, c, m))
        {
            ins_sort(j, c, m);
        }
    }
    print_matrix(r, c, m);
}