#include<stdio.h>
int main() 
{ 
int num=0,sum=0,rev=0; 
printf("Enter the number :"); 
scanf("%d",&num);
while(num>0) 
{
rev=num%10; 
sum=sum*10+rev;
num=num/10;
} 
printf("The reverse of number is :%d\n",sum);
}
