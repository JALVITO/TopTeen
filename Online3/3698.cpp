#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0;
	scanf("%d", &n);

	char s[n+1];
	scanf("%s", s);

	for (int x = 0; x < n; x++){
		if (s[x] >= 65 && s[x] <= 90)
			sum++;
	}

	//65 -> 90
	printf("%d %d ", sum, n-sum);

    return 0;
}
