#include <stdio.h>

int main()
{
    int rows, col, space, coef = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for (int rowno = 0; rowno < rows; rowno++) // for displaying rows
    {
        for (space = 1; space <= rows - rowno; space++) // for printing spaces before row starts
        {
            printf(" ");
        }
        for (col = 0; col <= rowno; col++) // for displaying pascal traingle
        {
            if (col == 0 || rowno == 0) // for printing 1 if either the row no is 0 or column is 0
            coef = 1;
            else
            coef = coef * (rowno - col + 1) / col; /* formula to calculate the coeffcients 
            i.e previous_coefficient *(row_no - column_no + 1) / coloumn_no (this is a form of
            recursive formula where we are using the result of previous calculations instead of calculating 
            the coeffcient from scratch each time with the NCR formula which saves time and increases 
            effieciency)*/

            printf("%4d", coef); /* in %4d 4 implies the width field for the integer meaning 
            it will take space worth 4 characters*/
        }
        printf("\n");
    }
    return 0;
}