#include

main()
{
	char name[50];
	long long int num=0;
	int age=0;
	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nEnter your age:");
	scanf("%d",&age);
	printf("\nyour number is:");
	scanf("%lld",&num);
	printf("%s\t%d\t%lld",name,age,num);
}
