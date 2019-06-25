#include<stdio.h>
int main()
{
     int c,f;
	    char a;
	    printf("Choose a function:\n 1.c to f \n 2.f to c \n 3.exit\n");
	    scanf("\n%s",&a);
	    switch(a)
	    {
	    case '1':
	    printf("Enter temperature in Celsius:\n");
	    scanf("%d",&c);
	    f=((9*c)/5)+32;
	    printf("Temperature in Fahrenheit is %d",f);
	    break;
	    case '2':
	    printf("Enter temperature in fahrenheit:");
	    scanf("%d",&f);
	    c=((f-32)*5)/9;
	    printf("temperature in Celsius is %d",c);
	    break;
	    case '3':
	    exit(0);
	    break;
	    default:
	    printf("Invalid Choice");
}
    return 0;
}
