#include<stdio.h>
#include<conio.h>
#define N 5
int main(){
    int la1[N],la2[N],la3[N+N];
    int i,j=0;
    printf("Enter %d elements of 1st array : ",N);
    for(i=0;i<N;i++){
        scanf("%d",&la1[i]);
    }
    printf("Enter %d elements of 2nd array : ",N);
    for(i=0;i<N;i++){
        scanf("%d",&la2[i]);
    }
    for(i=0;i<N;i++){
        la3[j]=la1[i];
        j++;
    }
    for(i=0;i<N;i++){
        la3[j]=la2[i];
        j++;
    }
    printf("Elements of 3rd array are : ");
    for(i=0;i<N+N;i++){
        printf("%d ",la3[i]);
    }
    return 0;
}