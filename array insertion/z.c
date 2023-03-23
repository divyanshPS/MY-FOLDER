#include<stdio.h>

int main(){
    int a[5],i, pos,element;
    printf("Enter elements : ");
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position : ");
    scanf("%d", &pos);
    printf("Enter element  : ");
    scanf("%d", &element);
    for ( i = 4; i >= (pos-1); i--)
    {   
        a[i+1]=a[i];
    }
    a[pos-1]=element;
    for ( i = 0; i < 5; i++)
    {
       printf("%d ",a[i]);
    }
    
    return 0;
}