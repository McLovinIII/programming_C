#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "foo.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    printf("Введите размер матриц: ");
    scanf("%d", &n);

    double **matrix1 = malloc(sizeof(*matrix1) * n);
    if (matrix1 == NULL) return -1;
    for (int i = 0; i < n; i++)
        matrix1[i] = malloc(sizeof(**matrix1) * n);

    double **matrix2 = malloc(sizeof(*matrix2) * n);
    if (matrix2 == NULL) return -1;
    for (int i = 0; i < n; i++)
        matrix2[i] = malloc(sizeof(**matrix2) * n);

    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j ++)
        {
            printf("Введите %d.%d элемент матрицы №1: ",i +1, j + 1);
            scanf("%lf", &matrix1[i][j]);
        }

    printf("\n");

    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j ++)
        {
            printf("Введите %d.%d элемент матрицы №2: ",i +1, j + 1);
            scanf("%lf", &matrix2[i][j]);
        }

    for (int i = 0; i < n; i++, printf("\n"))
        for(int j = 0; j < n; j ++)
            printf("%lf\t", matrix1[i][j]);

    printf("\n");

    for (int i = 0; i < n; i++, printf("\n"))
        for(int j = 0; j < n; j ++)
            printf("%lf\t", matrix2[i][j]);


    for (int i = 0; i < n; i++)
        free(matrix1[i]);
    free(matrix1);

    for (int i = 0; i < n; i++)
        free(matrix2[i]);
    free(matrix2);


    char operation;
    printf("Введите знак операции (+, -, *): ");
    scanf(" %c", &operation);


    double **result_matrix = foo(matrix1, matrix2, n, operation);

        if (result_matrix != NULL)
        {
        printf("Результат:\n");
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                printf("%8.2f ", result_matrix[i][j]);
            printf("\n");
        }

    for(int i=0;i<n;i++)
    {
        free(result_matrix[i]);
        free(matrix1[i]);
        free(matrix2[i]);
    }
    free(result_matrix);
    free(matrix1);
    free(matrix2);
    return 0;
}
