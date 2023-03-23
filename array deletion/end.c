#include<stdio.h>
#include<conio.h>

void main(){
    int i,N,item;
    printf("Enter the size of the array : ");
    scanf("%d",&N);
    int la[N];
    printf("Enter the %d elements of array : ",N);
    for(i=0;i<N;i++){
        scanf("%d",&la[i]);
    }
    item=la[N-1];
    N-- ; //to decrease array size
    printf("Deleted item is = %d\n",item);
    printf("Elements of array are : \n");
    for(i=0;i<N;i++){
        printf("%d ",la[i]);
    }

    getch();
}/*
Enter the size of the array : 10
Enter the 10 elements of array : 1 2 3 4 5 6 7 8 9 10
Deleted item is = 10
Elements of array are :
1 2 3 4 5 6 7 8 9
*/