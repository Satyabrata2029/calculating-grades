#include<stdio.h>
main()
{
	int marks;
	printf("Enter Marks:\n");
	scanf("%d",&marks);
    if(marks>=85)
	{
		printf("You secured grade A");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("You secured grade B");
	}
	else if(marks>=55 && marks<=69)
	{
		printf("You secured grade C");
	}
	else if (marks>=40 && marks<=54)
	{
		printf("You secured grade D");
	}
	else
	{
		printf("You secured grade F");
	}
	return 0;
	
}
