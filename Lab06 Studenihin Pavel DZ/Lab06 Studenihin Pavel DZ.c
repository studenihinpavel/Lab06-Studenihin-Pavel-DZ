#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int year;
    printf("Введите год = ");
    scanf_s("%d", &year);
    if ((year % 4 == 0) != (year % 100 == 0) || (year % 400 == 0))
    {
        printf("Год %d високосный\n", year);
        printf("366 дней в этом году\n");
    }
    else
    {
        printf("Год %d не високосный\n", year);
        printf("365 дней в этом году\n");
    }
    system("pause");
 

}