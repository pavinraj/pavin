#include <stdio.h>
int main
{
	int n1,n2,d;
	printf("enter the number1:");
	scanf("%d",&n1);
	printf("enter the number2:");
	scanf("%d",&n2);
	d=n1-n2;
	if(d%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
