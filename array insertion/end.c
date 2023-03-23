#include<stdio.h>
#include<conio.h>
#define N 10
void main(){
    int la[N],i,item;
    printf("Enter %d elements of array : ",N-1);
    for(i=0;i<N-1;i++){
        scanf("%d",&la[i]);
    }
    printf("Enter item to be inserted : ");
    scanf("%d",&item);
    la[N-1]=item;
    printf("Elements of array are : ");
    for(i=0;i<=N-1;i++){
        printf("%d ",la[i]);
    }
    getch();
}
/*Enter 9 elements of array : 1 2 3 4 5 6 7 8 9
Enter item to be inserted : 10
Elements of array are : 1 2 3 4 5 6 7 8 9 10*/