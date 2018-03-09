#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping %d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping %d %d",a,b);
	return 0;
}
