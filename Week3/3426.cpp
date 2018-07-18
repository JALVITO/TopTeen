#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	long long int a,b,max,min,ans;

	scanf("%llu", &a);
	scanf("%llu", &b);

	max = std::max(a,b);
	min = std::min(a,b);

	//ans = (0.5) * ( (min+max-1) + (max-min+1) ) * ( (min+max-1) - (max-min+1) + 1);
	ans = (max) * (2*min-1);

	printf("%llu \n", ans);

    return 0;
}
