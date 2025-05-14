#include<stdio.h>
#include<conio.h>
void main()
{
int fd,ld,num,sum;
clrscr();
printf("enter num:");
scanf("%d",&num);
ld=num%10;
	while(num>0)
	{
		fd=num%10;
		num/=10;
	}
	sum=fd+ld;
	printf("%d",sum);
getch();
}

