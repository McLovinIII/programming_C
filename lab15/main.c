#include <stdio.h>

void print_forward(int n)
{
    if (n == 0)
        return;
    print_forward(n / 10);
    printf("%d ", n % 10);
}

void print_backward(int n)
{
    if (n == 0)
        return;
    printf("%d ", n % 10);
    print_backward(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0\n0\n");
        return 0;
    }

    print_forward(n);
    printf("\n");
    print_backward(n);
    printf("\n");

    return 0;
}
