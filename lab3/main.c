#include <stdio.h>
#include <locale.h>

int main()
{
    char str[80];

    printf("������� ������: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
            str[i] = 'A';
        else if (str[i] == 'b')
            str[i] = 'B';
    }

    printf("������������ ������: %s\n", str);

    return 0;
}
