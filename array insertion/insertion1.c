#include <stdio.h>
/* this approach is for when we are not filling the array with values upto its second last index 
( second last because so that we can sucessfully shift its value to last index and
all other required values to their next index incase of insertion of a new element without
going out of bounds of the arrays)
*/int main()
{
    int arr[100], n, i, value, pos;
    printf("Enter no of elements of the array : ");
    scanf("%d", &n);
    printf("Enter the elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where the new element is to be inserted : ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted : ");
    scanf("%d", &value);
    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    printf("array after insertion is : ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}