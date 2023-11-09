#include "matrix.h"
/**
 * check_line - checks if a line is sorted or not
 * @n_line: line number
 * @c: number of columns
 * @m: pointer to a matix
 * Return: true if a line isnt sorted, false otherwise
 */
bool check_line(int n_line, int c, int **m)
{
    for (int i = 0; i < c - 1; i++)
    {
        if (m[n_line][i] >= m[n_line][i + 1])
            return true;
        return false;
    }
}