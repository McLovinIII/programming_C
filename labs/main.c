#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    FILE *f, *f1;;
    char line[256];
    setlocale(LC_ALL, "Rus");

    f = fopen("names.txt", "w");
    if (f == NULL)
    {
        perror("������ ��� �������� �����");
        return 1;
    }
        fprintf(f, "%s", "������ ���� ��������� 1975\n");
        fprintf(f, "%s", "������� ������� ��������� 1981\n");
        fprintf(f, "%s", "�������� ����� ������������� 1983\n");
        fprintf(f, "%s", "������������ ������� ��������� 1978\n");

    fclose(f);

    f = fopen("names.txt", "r");

    f1 = fopen("filtered.txt", "w");
    if (f1 == NULL)
    {
        perror("������ ��� �������� �����");
        fclose(f);
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        char surname[50], name[50], patronymic[50];
        int year;

        // ������� ���������� ������
        int num_fields = sscanf(line, "%s %s %s %d", surname, name, patronymic, &year);
        if (num_fields == 4) {
            if (year > 1980) {
                fputs(line, f1);
            }
        }
    }
    fclose(f);
    fclose(f1);
    return 0;
}
