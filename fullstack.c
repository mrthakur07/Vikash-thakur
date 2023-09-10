// stack using array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int Stack[SIZE];
int top=-1;
void push();
void pop();
void show();
void main()
{
    int choice;
    while(1)
    {
        printf("\nSTACK OPERATION\n");
        printf("\n1:push element\n2:pop element\n3:show element\n4:End\n");
        printf("enter the stack operation\n");
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
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("sorry!out of stack perform");
    
        }
    }

}
void push()
{
    int a;
    printf("enter the values which you want to add\n");
    scanf("%d",&a);
    if(top==SIZE-1)
    {
        printf("\t\t\toverflow!!\n");
    }
    else
    {
      top++;
      Stack[top]=a;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("\t\t\t\t\tunderflow!!\n");
    }
    else
    {
        item=Stack[top];
        top--;
        printf("%d is poped \n  ",item);
    }
}
void show()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",Stack[i]);
    }
}
