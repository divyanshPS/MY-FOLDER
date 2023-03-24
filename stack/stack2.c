#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 20
int stack[MAX_SIZE],top=-1;

void push(int);
int pop();
int main(){
    int ch,x,value;
    printf("STACK OPERATIONS :-\n");
    printf("1.push\n2.pop\n3.exit\n");
    while(value!=3){
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
	    case 1:
	    printf("\nEnter the element to be pushed : \n");
	    scanf("%d",&x);
	    push(x);
	    break;

	    case 2:
	    x=pop();
	    if(x!=-1)
	    printf("\nThe popped element is : %d\n",x);
	    else
	    printf("\nThe stack is empty\n");
	    break;

	    case 3:
	    value=3;
	    break;

	    default:
	    printf("\nEnter correct choice\n");
	    break;
	}
    }
    return 0;
}
void push(int x){
    if(top==MAX_SIZE){
    printf("\nOVERFLOW\n");
    return ;
    }
    else{
    top=top+1;
    stack[top]=x;
    return ;
    }
}
int pop(){
    int x;
    if(top==-1){
    printf("\nUNDERFLOW\n");
    return -1;
    }
    else{
    x = stack[top];
    top = top-1;
    return x;
    }

}