#include "matrix.h"
/**
 * ins_sort - sorts a matrix
 * @r: row number
 * @c: number of columns
 * @m: pointre to the matrix
 * Return: void
 */
void ins_sort(int r_num, int c, int **m)
{
    int tmp, i, pos;
    for (i = 1; i < c; i++)
    {
        pos = i - 1;
        tmp = m[r_num][i];
        while (pos >= 0 && m[r_num][pos] > tmp)
        {
            m[r_num][pos + 1] = m[r_num][pos];
            pos--;
        }
        m[r_num][pos + 1] = tmp;
    }
}