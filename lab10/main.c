#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_NUMBERS 100


#define MAX_IN_ARR(arr, n) ({ \
    int temp = arr[0]; \
    for (int i = 0; i < n - 1; i++) \
    {\
     for(int j = 0; j < n - i - 1; j++)\
     {\
      if(arr[j] > arr[j + 1])\
      {\
        temp = arr[j];\
        arr[j] = arr[j + 1];\
        arr[j + 1] = temp;\
      }\
     }\
    }\
    arr[n-1]; })

int main()
 {
    setlocale(LC_ALL, "Rus");
    char line[1024];
    int numbers[MAX_NUMBERS];
    int count = 0;

    printf("Введите числа через пробел: ");
    if (fgets(line, sizeof(line), stdin))
    {
        char *ptr = line;
        while(*ptr != '\0' && count <= MAX_NUMBERS)
        {
            while(*ptr == ' ' || *ptr == '\n') ptr++;
            if (*ptr == '\0') break;
            int newNumb;
            int tempCount = sscanf(ptr, "%d", &newNumb);
            if(tempCount == 1)
            {
                numbers[count++] = newNumb;
                while (*ptr != ' ' && *ptr != '\n' && *ptr != '\0') ptr++;
            }
            else
                break;
        }
        if (count > 0)
        {
            int maxNumber = MAX_IN_ARR(numbers, count);
            printf("Максимальное число: %d\n", maxNumber);
        }
        else
            printf("Числа не введены.\n");
    }
    else
        return 1;

    return 0;
}
