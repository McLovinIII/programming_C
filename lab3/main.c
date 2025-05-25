#include <stdio.h>
#include <locale.h>

int main()
{
    char str[80];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
            str[i] = 'A';
        else if (str[i] == 'b')
            str[i] = 'B';
    }

    printf("Обработанная строка: %s\n", str);

    return 0;
}
