#include <stdio.h>

#define MAX 1000

int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i < MAX; i++) {
	  if (!((i % 3) && (i % 5)))  sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
