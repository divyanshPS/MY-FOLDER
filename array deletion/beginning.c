#include<stdio.h>
#include<conio.h>
#define N 10
void main(){
    int la[N],item;
    int i,j;
    printf("Enter %d elements of an array : \n",N);
    for(i=0;i<N;i++){
        scanf("%d",&la[i]);
    }
    item=la[0];
    for(j=0;j<N-1;j++){
        la[j]=la[j+1];
    }
    printf("Deleted item is = %d\n",item);
    printf("Elements of array are : \n");
    for(i=0;i<N-1;i++){
        printf("%d ",la[i]);
    }
    getch();
}
/*Enter 10 elements of an array : 1 2 3 4 5 6 7 8 9 10
Deleted item is = 1
Elements of array are : 
2
3
4
5
6
7
8
9
10*/