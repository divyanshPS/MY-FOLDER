#include <stdio.h>
void leap_year(int);
int main()
{
   int year;
   printf("Enter the year : ");
   scanf("%d", &year);
   leap_year(year);
   return 0;
}
void leap_year(int year)
{
   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);
}
