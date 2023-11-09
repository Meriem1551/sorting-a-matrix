#include "matrix.h"

/**
 * main - checks our code
 * Return: 0 always
 */

int main(void)
{
    int row, col;
    int **matrix;

    row = get_input("Enter number of rows");
    col = get_input("Enter number of columns");
    matrix = create_matrix(row, col);
}