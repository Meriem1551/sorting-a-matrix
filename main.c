#include "matrix.h"

/**
 * main - checks our code
 * Return: 0 always
 */

int main(void)
{
    int
        row,
        col,
        line_num;
    int **matrix;
    bool check;
    row = get_input("Enter number of rows");
    col = get_input("Enter number of columns");
    matrix = create_matrix(row, col);
    line_num = get_input("Which line want you to check? ");
    check = check_line(line_num, col, matrix);
}