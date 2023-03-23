#include<stdio.h>
#include<conio.h>
#define N 10
int main(){
    int la[N],loc,item;
    int i;
    printf("Enter %d elements of array : ",N-1);
    for(i=0;i<N-1;i++){
    scanf("%d",&la[i]);
    }
    printf("Enter the item to be inserted : ");
    scanf("%d",&item);
    do{
        printf("Enter the location : ");
        scanf("%d",&loc);
    }while(loc>N);
    for(i=N-2;i>=loc-1;i--){
        la[i+1]=la[i];
    }
    la[loc-1]=item;
    printf("Elements of array are : ");
    for(i=0;i<=N-1;i++){
        printf("%d ",la[i]);
    }
    return 0;
}/*Enter 9 elements of array : 1 2 3 4 5 7 8 9 10
Enter the item to be inserted : 6
Enter the location : 6
Elements of array are : 1 2 3 4 5 6 7 8 9 10 */