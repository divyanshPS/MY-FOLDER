#include<stdio.h>
#define N 5
int main(){
    int arr[N] , pos ;
    printf("Enter %d elements of the array\n",N);
    for (int i = 0; i < N; i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element to be deleted : ");
    scanf("%d",&pos);
    for (int j = pos-1; j < N-1; j++)
    {
        arr[j] = arr[j+1] ;
    }
    printf("Array after deletion is : ");
    for (int i = 0; i < N-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}