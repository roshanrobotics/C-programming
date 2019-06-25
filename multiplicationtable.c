#include<stdio.h>

main()
{
    int x,i,m;
    
    printf("Enter the no:-");
    scanf("%d",&x);
    
    printf("---------------------------------");
    printf("\nThe multiplication table of %d is:-\n",x);
    for(i=1;i<=10;i++)
    {
        m=x*i;
        printf("\n%d*%d=%d",x,i,m);
    }
    printf("\n");
}
