#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void show();
void main()
{
    int choice;
    while(1)
    {
        printf("queue perform\n");
        printf("1.enqueue\n2.dequeue\n3.show\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
           enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("\t\tsorry! you can only use 1 to 4 number \n");
        }
    }
}
void enqueue(int x)
{
    printf("enter the which you want to input\n");
    scanf("%d",&x);
    if(rear==N-1)    // isfull condition
    {
        printf("overflow\n");
    }
    else if(front==-1 && rear==-1)    //(both front and rear are point at -1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;            //(increment the rear)
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1 )      //(is empty condition)
    {
        printf("underflow\n");
        
    }
    else if(front==rear)     //(both front and rear are point at index)
    {
        front=rear=-1;
    }
    else
    {
        printf(" the dequeue element is: %d\n",queue[front]);
        front ++;
    }
}
void show()
{
    int i;
    if(front==-1 && rear==-1 )
    {
        printf("queue is empty\n");
    }
    else
    {
        for(i=front;i<rear+1;i++)
        {
            printf(" the element is %d\n",queue[i]);
        }
    }
}
