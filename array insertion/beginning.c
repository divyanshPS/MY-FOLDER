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
    for(i=N-2;i>=0;i--){
        la[i+1]=la[i];
    }
    la[0]=item;
    printf("Elements of array are : ");
    for(i=0;i<=N-1;i++){
        printf("%d ",la[i]);
    }
    getch();
}/*Enter 9 elements of array : 1 2 3 4 5 6 7 8 9
Enter item to be inserted : 0
Elements of array are : 0 1 2 3 4 5 6 7 8 9*/
