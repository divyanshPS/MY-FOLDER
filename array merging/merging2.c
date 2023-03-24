#include<stdio.h>
#include<conio.h>
#define M 100
#define N 100
void main(){
    int la1[M],la2[N],la3[M+N];
    int asize , bsize , i , j=0;
    printf("\nEnter the size of 1st array : ");
    scanf("%d",&asize);
    printf("\nEnter %d elements of 1st array : \n",asize);
    for(i=0;i<asize;i++){
        scanf("%d",&la1[i]);
        la3[j]=la1[i];
        j++;
    }
    printf("\nEnter the size of 2nd array : ");
    scanf("%d",&bsize);
    printf("\nEnter %d elements of 2nd array : \n",bsize);
    for(i=0;i<bsize;i++){
        scanf("%d",&la2[i]);
        la3[j]=la2[i];
        j++;
    }
    printf("\nElements of merged array are : \n");
    for(i=0;i<asize+bsize;i++){
        printf("%d ",la3[i]);
    }
    getch();
}