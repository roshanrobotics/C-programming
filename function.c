#include<stdio.h>
struct book
{
	char title[50];
	char author[50];
	char genre[20];
}b;
void display()
{
	
	printf("\nTITLE :- %s",b.title);
	printf("\nAUTHOR :- %s",b.author);
	printf("\nGENERE :- %s",b.genre);
}
int main()
{
	printf("Enter the title\n");
	gets(b.title);
	printf("Enter the author \n");
	gets(b.author);
	printf("Enter the genre \n");
	gets(b.genre);
	display();
}



