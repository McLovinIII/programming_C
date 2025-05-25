#include <stdio.h>
#include "formulas.h"
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "Rus");
	double ab,bc,ac;
	printf("Введите сторону AB: ");
	scanf("%lf",&ab);
	printf("Введите сторону BC: ");
	scanf("%lf",&bc);
	printf("Введите сторону AC: ");
	scanf("%lf",&ac);
	printf("%2.lf %2.lf %2.lf",ab,bc,ac);


	if (ab+bc>ac && ab+ac>bc && bc+ac>ab)
		printf("\n%s%2.lf\n%s%2.lf","Периметр=",perimeter(ab,bc,ac),"Площадь=",area(ab,bc,ac));

	else
        return 1;
	return 0;
}
