#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	long long unsigned n; 
	long double sum = 1; 
	scanf("%llu", &n);

	int x = 1;
	while (sum < n){
		sum = x*x*x*x/3.0-2*x*x*x+23.0/3*x*x-9*x+4;
		printf("%Lf \n", sum);
		printf("%d \n", x);
		x++;
	}

	printf("%d \n", x);

    return 0;
}
