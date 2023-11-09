#ifndef MATRIX_H
#define MATRIX_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Search-algorithms/main.h"
int **create_matrix(int, int);
bool check_line(int, int, int **);
void sort_matrix(int, int, int **);
void ins_sort(int, int, int **);
void print_matrix(int, int, int **);
#endif