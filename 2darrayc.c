#include<stdio.h>

main()
{
	int a[5][5];
	int i,j,r,c;
	int avg,sum=0;
	
	printf("enter number of row =\n");
	scanf("%d",&r);
	printf("enter number of column =\n");
	scanf("%d",&c);
	
	printf("enter array elemant =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("the array elemant =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
    }
    avg=sum/(r*c);
    printf("\naverage of elemant =%d",avg);
}
