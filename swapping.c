#include<stdio.h>
int main()
{
 int a,b;
 printf("enter two variable");
 scanf("%d %d",&a,&b);
 a=a-b;
 b=a+b;
 a=b-a;
 printf("%d",a);
 printf("%d",b);
 }
 
 
