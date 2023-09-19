#include<stdio.h>
int main()
{
  int number,sum=0,rem,temp;
printf("enter the number\n");
scanf("%d",&number);
temp=number;
  while(number>0)
    {
      rem=number%10;
      sum=sum*10+rem;
      number=number/10;
    }
  if(temp==sum)
    printf("it is palindrome");
  else 
    printf("it isnot palindrome");
  return 0;
}
  
