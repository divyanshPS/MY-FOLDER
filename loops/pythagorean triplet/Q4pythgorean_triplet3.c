#include <stdio.h>
// this approach does not produce all the triplets
int main()
{
    int m,n,a,b,c;
    for(n=1;n<=10;n++){
        for(m=n+1;m<=10;m++){
            a=(m*m)-(n*n);
            b=2*m*n;
            c=(m*m)+(n*n);
            if((a*a)+(b*b)==(c*c)){
                
                if(a<=30 && b<=30 && c<=30){
                    printf("(%d , %d, %d)\n",a,b,c);
                }
            }
        }
    }
    return 0;
}