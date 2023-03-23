#include <stdio.h>
/*   1
    2 3
   4 5 6
  7 8 9 10 */
int main()
{
    int row, element, spaces, count = 1;
    for (row = 1; row <= 4; row++)
    {
        for (spaces = 1; spaces <= 4 - row; spaces++)
        {
            printf(" ");
        }

        for (element = 1; element <= row; element++)
        {   
            printf("%d ", count);
            count++;  
        }
        printf("\n");
    }
    return 0;
}