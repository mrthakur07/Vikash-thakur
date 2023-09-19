#include<stdio.h>
int main()
{
  int number,i,c;
  printf("enter the number\n");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
    {
      if(number%i==0)
      {
        c++;
      }
    } 
      if(c==0)
      {
        printf("number is prime");
      }
      else
      {
        printf("number isnot prime");
      }    
} 
