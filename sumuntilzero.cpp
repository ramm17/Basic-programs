#include<stdio.h>

int main()
{
	int n=1, sum=0;
	while(n>0)
	{
		printf("Enter the valuen of n");
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("sum=%d",sum);
	return 0;
}
