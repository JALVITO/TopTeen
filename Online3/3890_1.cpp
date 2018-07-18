#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	long long unsigned n, sum = 0; 
	scanf("%llu", &n);

	int x = 1;
	while (n >= sum){
		sum += 2*x*x-2*x+1;
		x++;

		//printf("sum: %llu \n", sum);
		//printf("x: %d \n", x);
	}

	x-=2;

	printf("%d \n", x);

    return 0;
}
