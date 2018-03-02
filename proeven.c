#include<stdio.h>
int main()
{
	int n,a,m;
	scanf("%d%d",&n,&m);
	a=n*m;
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
