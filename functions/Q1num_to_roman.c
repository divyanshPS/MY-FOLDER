#include <stdio.h>
void roman(int);
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    roman(year);
    return 0;
}
void roman(int year)
{
    while (year > 0)
    {
        if (year >= 1000)
        {
            printf("M");
            year -= 1000;
        }
        else if (year >= 900)
        {
            printf("CM");
            year -= 900;
        }
        else if (year >= 500)
        {
            printf("D");
            year -= 500;
        }
        else if (year >= 400)
        {
            printf("CD");
            year -= 400;
        }
        else if (year >= 100)
        {
            printf("C");
            year -= 100;
        }
        else if (year >= 90)
        {
            printf("XC");
            year -= 90;
        }
        else if (year >= 50)
        {
            printf("L");
            year -= 50;
        }
        else if (year >= 40)
        {
            printf("XL");
            year -= 40;
        }
        else if (year >= 10)
        {
            printf("X");
            year -= 10;
        }
        else if (year >= 9)
        {
            printf("IX");
            year -= 9;
        }
        else if (year >= 5)
        {
            printf("V");
            year -= 5;
        }
        else if (year >= 4)
        {
            printf("IV");
            year -= 4;
        }
        else if (year >= 1)
        {
            printf("I");
            year -= 1;
        }
    }
}