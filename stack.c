

#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;//Stack is Empty



void push(){
    int num;
    if(top==size)
    {
        printf("Stack is full:\n");
    }
    else{
        printf("Enter the element to be pushed\n");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}

void pop(){
    
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    
    else{
        top--;
    }
}

void display(){
    printf("The elements are:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    
}

void main(){
    int choice;
    while(1){
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n Enter Your choice:\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            push();
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("Wrong Entry");
        }
    }
}
