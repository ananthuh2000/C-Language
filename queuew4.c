#include<stdio.h>
#include<stdlib.h>

int size=5,queue[5],front=-1,rear=-1,i,n;

void display()
{
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}

void enqueue()
{
if(rear==size-1)
{
printf("Queue is full");
}
else
{
if(front=-1)
{
front++;
}
printf("Enter the element to be enqueue\n");
scanf("%d",&n);
rear++;
queue[rear]=n;
printf("Enqueued %d\n\n",n);
display();
}
}

void dequeue()
{
if(rear==-1)
{
printf("Queue is empty");
}
else
{
printf("Dequeued\n");
front++;
display();
}
}

void main()
{
while(1)
{
int choice;
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(1);
break;
default:printf("Wrong choice");
break;
}
}
}
