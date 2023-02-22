#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter a number");
	scanf("%d",&n);
	printf("first %d even numbers are:\n",n);
	for(j=1,i=0;j<=n;i=i+2,j++)
	{
		printf("%d",i);
	}
	return 0;
}

