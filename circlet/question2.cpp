#include<stdio.h>
#include<conio.h>
main()
{
	int a=11;
	int i,j;
	for( i=1;i<7;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%d",a);
			a++;
			
		}
		printf("\n");
	}
	getch();
}
