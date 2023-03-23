#include<stdio.h>
#include<conio.h>
#define M 100
#define N 100
int main(){
    int la1[M],la2[N],la3[M+N];
    int asize , bsize , i , j=0;
    printf("Enter the size of 1st array : ");
    scanf("%d",&asize);
    printf("Enter %d elements of 1st array : ",asize);
    for(i=0;i<asize;i++){
        scanf("%d",&la1[i]);
        la3[j]=la1[i];
        j++;
    }
    printf("Enter the size of 2nd array : ");
    scanf("%d",&bsize);
    printf("Enter %d elements of 2nd array : ",bsize);
    for(i=0;i<bsize;i++){
        scanf("%d",&la2[i]);
        la3[j]=la2[i];
        j++;
    }
    printf("Elements of merged array are : ");
    for(i=0;i<asize+bsize;i++){
        printf("%d ",la3[i]);
    }
    return 0;
}