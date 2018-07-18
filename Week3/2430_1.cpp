#include <stdio.h>

using namespace std;

int main()
{
	long long int n, val, x;
	scanf("%llu", &n);

	while(n != 0){

		x = 1;
		val = 0;
		while (val < n){
			val = x*(x+1)/2;
			x++;
			printf("%lld \n", x);
		}

		if (val == n)
			printf("YES \n");
		else
			printf("NO \n");

		scanf("%lld", &n);

	}

    return 0;
}
