#include<stdio.h>

main()
{	
	int arr[100][100];
	int i,j,r,c;
	printf("enter row size =");
	scanf("%d",&r);
	printf("enter cloumn size =");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
