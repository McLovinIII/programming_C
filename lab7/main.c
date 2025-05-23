#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 4

typedef struct human
{
  char name[50];
  char surname[50];
  int year;
} humen;

int main()
{
    setlocale(LC_ALL, "Rus");
    humen arr1[SIZE], arr2[SIZE];

    printf("������� ������ ��� %d �������:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("������� %d:\n", i + 1);
        printf("���: ");
        scanf("%s", arr1[i].name);
        printf("�������: ");
        scanf("%s", arr1[i].surname);
        printf("��� ��������: ");
        scanf("%d", &arr1[i].year);
    }

    for (int i = 0; i < SIZE; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if(arr2[j].year > arr2[j + 1].year)
            {
                humen temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    printf("\n��������������� ������ �� ���� ��������:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d. %s %s, %d\n",
                i + 1, arr2[i].name, arr2[i].surname, arr2[i].year);
    return 0;
}
