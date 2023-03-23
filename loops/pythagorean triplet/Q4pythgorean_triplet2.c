#include<stdio.h>
// this approach is simple but not efficient since we are iterating a lot of times
int main(){
    int a,b,c;
    for(a=1;a<=30;a++){
        for(b=1;b<=30;b++){
            for(c=1;c<=30;c++){
                if(a*a+b*b==c*c){
                    printf("(%2d,%2d,%2d)\n",a,b,c);
                }
            }
        }
    }
    return 0;
}