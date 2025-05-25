#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    const int n = 3;
    double arr1[n][n];
    double sum1 = 0;
    double sum2 = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            printf("Введите элемент №%d.%d матрицы 1: ", i + 1, j + 1);
            scanf("%lf", &arr1[i][j]);
        }

    for(int i = 0; i < n; i++)
        sum1 += arr1[i][i];
    for(int i = 0; i < n; i++)
        sum2 += arr1[i][n - 1 - i];

    printf("\nСумма главной диагонали: %2.lf\nСумма побочной диагонали: %2.lf\n\n", sum1, sum2);

    const int M = 2;
    int arr2[M][M];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
        {
            printf("Введите элемент №%d.%d матрицы 2: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }

    int arr3[M][M];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < M; k++)
                arr3[i][j] += arr2[i][k] * arr2[k][j];
        }

    printf("\nКвадрат равен:\n");
    for (int i = 0; i < M; i++)
    {
        printf("\t\t");
        for (int j = 0; j < M; j++)
            printf("%d ", arr3[i][j]);
        printf("\n");
    }

    return 0;
}
