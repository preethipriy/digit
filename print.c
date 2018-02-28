#include<stdio.h>
int main()
{
	int i,m;
	char n[10];
scanf("%s",&n);
m=strlen(n);
for(i=0;i<m;i++)
{
	printf("%c ",n[i]);
}
return 0;
}
