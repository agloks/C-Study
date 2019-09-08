#include <stdio.h>
#include <stdlib.h>

int test(int a)
{
	int sum(int b)
	{
		return b+2;
	}
	return a+sum(a);
}

int main()
{
	printf("%d\n", test(2));
	return 0;
}