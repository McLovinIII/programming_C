#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    unsigned int N;
    printf("������� ����������� �����: ");
    scanf("%u", &N);

    unsigned int temp = N;
    int count = 0;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    // ������ ������ ��� �������� ����
    int *digits = (int*) malloc(count * sizeof(int));
    if (digits == NULL) {
        printf("������ ��������� ������.\n");
        return 1;
    }

    // ��������� ������ ������� � ������� �� ���������
    temp = N;
    for (int i = count - 1; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    // ����� ���� �� �������
    printf("����� �� �������:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    // ����� ���� � �������� �������
    printf("����� � �������� �������:\n");
    for (int i = count -1; i >=0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    free(digits);
    return 0;
}
