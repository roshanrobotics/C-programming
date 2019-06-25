#include<stdio.h>
main()
{
	int a=0,b=0,c=0;
	int sum=0;
    float avg=0;

    printf("Enter your marks:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Your sum is= %d \n and your avg is= %f",sum,avg);
}
