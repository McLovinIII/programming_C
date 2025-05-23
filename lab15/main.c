#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    unsigned int N;
    printf("Введите натуральное число: ");
    scanf("%u", &N);

    unsigned int temp = N;
    int count = 0;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    // Создаём массив для хранения цифр
    int *digits = (int*) malloc(count * sizeof(int));
    if (digits == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Заполняем массив цифрами в порядке их появления
    temp = N;
    for (int i = count - 1; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    // Вывод цифр по порядку
    printf("Цифры по порядку:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    // Вывод цифр в обратном порядке
    printf("Цифры в обратном порядке:\n");
    for (int i = count -1; i >=0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    free(digits);
    return 0;
}
