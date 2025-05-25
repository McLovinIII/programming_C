#include <stdio.h>
#include <math.h>

int main()
{
    setlcoale(LC_ALL,"Rus");
    double a = 1.5;
    double b = 2.2;
    double c = 3.0;
    double D = b * b - 4 * a * c;

    if (D < 0)
    {
        printf("Дискриминант отрицателен. Корней нет.\n");
        return 0;
    }

    double sqrt_D = sqrt(D);
    double x1 = (-b + sqrt_D) / (2 * a);
    double x2 = (-b - sqrt_D) / (2 * a);

    printf("Корень x1 = %.4f\n", x1);
    printf("Корень x2 = %.4f\n", x2);

    return 0;
}
