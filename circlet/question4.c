#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	int a=1;
	for(i=1;i<7;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=7;j>i;j--)
		{
			printf("%d",j%2);
//			if(j%2==0)
//			{
//				printf("0");
//			}
//			else{
//				printf("1");
//			}
//			a++;
		}
		printf("\n");
	}
}
