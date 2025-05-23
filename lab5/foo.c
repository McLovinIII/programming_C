#include "foo.h"

double** foo(double **matrix1, double **matrix2, int n, char op)
{
    double **result = malloc(sizeof(*result) * n);
    if (result == NULL) return NULL;
    for (int i = 0; i < n; i++)
        result[i] = malloc(sizeof(**result)*n);

    switch (op)
    {
        case '+':
            for (int i=0; i<n; i++)
                for (int j=0; j<n; j++)
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
            break;

        case '-':
            for (int i=0; i<n; i++)
                for (int j=0; j<n; j++)
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
            break;

        case '*':
            for (int i=0; i<n; i++)
                for (int j=0; j<n; j++)
                {
                    result[i][j] = 0.0;
                    for (int k=0; k<n; k++)
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            break;

        default:
            printf("Ошибка!Знак не существует.\n");
            for (int i=0; i<n; i++)
                free(result[i]);
            free(result);
            return NULL;
    }

    return result;
}
