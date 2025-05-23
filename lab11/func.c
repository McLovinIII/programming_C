#include "func.h"

int sum(int n, ...)
{
  int res = 0;
  va_list ptr;
  va_start(ptr, n);
  for(;n > 0; n--)
    res += va_arg(ptr, int);
  va_end(ptr);
  return res;
}


int maxV(int n, ...) {
    va_list ptr;
    va_start(ptr, n);
    int res = va_arg(ptr, int);
    int maximum = va_arg(ptr, double);
    for(int i = 1; i < n; i++)
    {
        int tmp = va_arg(ptr, int);
        if(tmp > maximum) res = tmp;
    }
    va_end(ptr);
    return res;
}


int minV(int n, ...) {
    va_list ptr;
    va_start(ptr, n);
    int res = va_arg(ptr, int);
    int maximum = va_arg(ptr, double);
    for(int i = 1; i < n; i++)
    {
        int tmp = va_arg(ptr, int);
        if(tmp < maximum) res = tmp;
    }
    va_end(ptr);
    return res;
}


double avg(int n, ...) {
    int i;
    int tmp;
    int sum = 0;

    va_list ptr;
    va_start(ptr, n);

    for (i = 0; i < n; i++)
        sum += va_arg(ptr, int);

    va_end(ptr);
    return (double)sum / n;
}
