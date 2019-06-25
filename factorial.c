#include<stdio.h>

main()
{
    int n,i,fact=1;
    printf("Enter the no:-");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    printf("\nFactorial of %d is %d",n,fact);
}
