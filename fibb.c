#include <stdio.h>

int main(void) {
	int n,t1=1,t2=1,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%d",t1);
	            t=t1+t2;
		t1=t2;
		t2=t;
	}
	return 0;
}
