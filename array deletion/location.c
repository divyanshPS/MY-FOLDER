#include<stdio.h>
#include<conio.h>
#define N 10
void main(){
    int la[N],loc,item;
    int i;
    printf("Enter %d elements of array : \n",N);
    for(i=0;i<N;i++){
        scanf("%d",&la[i]);
    }
    do{
        printf("Enter the location of element to deleted <= %d : ",N);
        scanf("%d",&loc);
    }while(loc>N);
    item = la[loc-1];
    for(i=loc-1;i<N-1;i++){
        la[i]=la[i+1];
    }
    printf("Deleted item is = %d\n",item);
    printf("Elements of array are : \n");
    for(i=0;i<N-1;i++){
        printf("%d ",la[i]);
    }
    getch();
}
/*
Enter 10 elements of array : 1 2 3 4 5 6 7 8 9 10
Enter the location of element to deleted <= 10 : 4
Deleted item is = 4
Elements of array are : 1 2 3 5 6 7 8 9 10*/