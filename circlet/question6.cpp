#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		for(c=n;c>a;c--)
		{
			printf("  ");
		}
//			for(c=n;c>a;c--)
//		{
//			printf(" ");
//		}
		for(b=a;b>=1;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
