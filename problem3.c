#include <stdio.h>
#include <math.h>

#define MAX 600851475143
#define int64 unsigned long long

int64  get_prime(double);

int main(void)
{
	int64 prime = get_prime(MAX);
	printf("%llu\n", prime);
	return 0;
}

int64 get_prime(double max)
{
	int64 square_root = sqrt(max);
	int64 i, num = (int64) max, prime = 0;
	for (i = 2; i <= square_root;) {
		if (num % i == 0) {
			num /= i;
			prime = i;
			printf("%llu\n", num);
		}
		else i++;
	}
	return prime;
}
