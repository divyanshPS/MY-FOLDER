#include<stdio.h>
#include<conio.h>
#define N 10
/* this program gets n-1 elements of array from the user and gets one another element 
and location for its insertion */
int main(){
    int la[N],loc,item;
    int i,j;
    printf("Enter %d elements of the array : ",N-1);
    for(i=0;i<N-1;i++)
    scanf("%d",&la[i]);
    printf("Enter the item to be inserted : ");
    scanf("%d",&item);
    getagain :
    printf("Enter the postion of the element <= %d : ",N);
    scanf("%d",&loc);
    if(loc>N){
        goto getagain;
    }
    j=N-2;
    while(j>=loc-1){
        la[j+1]=la[j];
        j--;
    }
    la[loc-1]=item;
    printf("Resultant array is : ");
    for(i=0;i<N;i++){
        printf("%d ",la[i]);
    }
    return 0;
}
/* problem :- when using "void main() and getch" u have to press a key to exit the program 
even when the program has finished its job whereas while using "int main() and return 0" program 
stops its execution immediately after finishing its job without needing to press any key*/