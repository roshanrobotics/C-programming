//READ THE FIRST NAME AND THE LAST NAME OF THE USER IN 2 DIFFERENT VARIABLES, COMBINE THEM, AND DISPLAY THEIR FULL NAME USING A SINGLE string
#include<stdio.h>

main()
{
	char a[50],b[50];
	printf("enter your first name:");
	scanf("%s",&a);
	printf("enter your last name:");
	scanf("\n%s",&b);
	printf("%s%s",a,b);
}
