#include<stdio.h>
#include<conio.h>
#include<math.h>
// this is the best approach and easy to undestand
int main()
{
    int a, b , num ;
    float c;

    //calculate the another side using Pythagoras Theorem
    //a*a + b*b = c*c
    //c = sqrt(a*a+b*b)
    //maximum length should be equal to 30
    for(a=1;a<=30;a++)
    {
       for(b=1;b<=30;b++)
        {
            c = sqrt(a*a+b*b);
            if(c == (int)c)// eg:- 4.0==4 but 4.5 != 4
            {
                printf("%d, %d, %d\n",a,b,(int)c);
            }
        }
    }
    printf("%d",num);
}