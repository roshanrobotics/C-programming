//Celsius = 5 * (Fahrenheit - 32)/9


#include<stdio.h>
 main()
{
	float celsius=0;
	float frh=0;
	printf("Your room temperature in  celsius is:");
    scanf("%f",&celsius);
    frh= ((celsius*9)/5)+32;
	printf("\n%f",frh);	
	
} 
