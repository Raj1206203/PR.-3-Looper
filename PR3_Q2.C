#include<stdio.h>
#include<conio.h>
void main()
{
	int num,count=0;
	clrscr();

	printf("\nenter num:");
	scanf("%d",&num);

	while(num>0)
	{
		count++;
		num/=10;
	}
	printf("the count is: %d",count);
	getch();
}