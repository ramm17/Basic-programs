#include<stdio.h>
int main()
{
	int num, result=0, rem, originalnum;
	printf("enter the num");
	scanf("%d", &num);
	originalnum=num;
	while(num>0)
	{
		rem=originalnum%10;
		result=result+rem*rem*rem;
		originalnum=num/10;
		{
			if(result==num)
			{
				printf("Armstrong number");
			}
			else
			{ 
			printf("Not armstrong");
			}
		}
	}
	return 0;
}
