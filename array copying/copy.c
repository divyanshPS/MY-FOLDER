#include<stdio.h>
#include<conio.h>
#define N 10
int main(){
    int la[N],la2[N];
    int i;
    printf("Enter %d elements of an array : \n",N);
    for(i=0;i<N;i++){
        scanf("%d",&la[i]);
    }
    for(i=0;i<N;i++){
        la2[i]=la[i];
    }
    printf("Copied elements are : ");
    for(i=0;i<N;i++){
        printf("%d ",la2[i]);
    }
    return 0;
}