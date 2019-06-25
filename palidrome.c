#include<stdio.h>
    int main() 
	{
      char a[20], b[20];
     
      printf("Enter a string:");
      gets(a);
      strcpy(b,a);
      strrev(b);  
     
      if (strcmp(a,b) == 0)  
        printf("The entered string is a palindrome.\n");
      else
        printf("The entered string isn't a palindrome.\n");
     
      return 0;
    }
