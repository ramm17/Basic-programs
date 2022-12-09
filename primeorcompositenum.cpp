#include<stdio.h>

int main()
{
	int n, i, counter=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			counter++;
		}
		if (counter==2)
		{
			printf("Prime number");
		}
		else
		{
			printf("composite number");
		}
   	}
   	return 0;
}
	

