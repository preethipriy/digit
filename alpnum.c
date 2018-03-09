#include<stdio.h>
int main()
{
	char a[50];
	int i,c,d;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			c++;
		}
		if(a[i]>='0'&&a[i]<='9')
		{
			d++;
		}
	}
	if((c&d)>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
