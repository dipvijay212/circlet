#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	int a=5;
	for(i=1;i<6;i++)
	{
		for(j=4;j>0;j--)
		{
			printf("  ");
		}
		for(k=5;k>0;k--)
		{
			printf("%d",k);
		}
//		printf("%d",i);
		printf("\n");
	}
}
