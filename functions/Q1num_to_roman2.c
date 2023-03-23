#include <stdio.h>
int roman(int);
int main()
{
    int year;
    printf("Enter the year(keep under 10,000) : ");
    scanf("%d", &year);
    roman(year);
    return 0;
}
int roman(int year)
{
    int tenk, fivehun, hundred, fifty, ten, five, one;
    tenk = year / 1000;
    fivehun = (year % 1000) / 500;
    hundred = (year % 1000) % 500 / 100;
    fifty = (year % 1000) % 500 % 100 / 50;
    ten = (year % 1000) % 500 % 100 % 50 / 10;
    five = (year % 1000) % 500 % 100 % 50 % 10 / 5;
    one = (year % 1000) % 500 % 100 % 50 % 10 % 5 / 1;
    printf("In roman : ");
    for (tenk; tenk > 0; tenk--)
    {
        printf("M");
    }
    
    if((year%1000)>=400 && (year%1000)<500)
    printf("CD");
    else if((year%1000)>=900 && (year%1000)<1000)
    printf("CM");
    else{
        for (fivehun; fivehun > 0; fivehun--){
        printf("D");
    }
    for (hundred; hundred > 0; hundred--){
        printf("C");
    }
    }

    if((year%100)>=40 && (year%100)<50)
    printf("XL");
    else if((year%100)>=90 && (year%100)<100)
    printf("XC");
    else{
        for (fifty; fifty > 0; fifty--){
        printf("L");
    }
        for (ten; ten > 0; ten--){
        printf("X");
        }
    }

    if((year%10)>=4 && (year%10)<5)
    printf("IV");
    else if((year%10)>=9 && (year%10)<10)
    printf("IX");
    else{
        for (five; five > 0; five--){
        printf("V");
        }
        for (one; one > 0; one--){
        printf("I");
        }
    }
}