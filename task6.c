#include<stdio.h>
int main() {
	int num=0,temp=0,b=0,sum=0;
	int i=0;
	for(i=0;i<2;i++)
	{
	
	printf("\nEnter the number: ");
	scanf("%d",&num);
	b=num;
	while(num>0)
	{
		temp=num%10;
		sum=sum+(temp*temp*temp);
		num=(num/10);
	}
	if(sum==b)
		printf("The number is an armstrong number.");
	else
		printf("The number is not an armstrong number.");
}
}
