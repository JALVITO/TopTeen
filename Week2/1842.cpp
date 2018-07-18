#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){
		int x1, y1, x2, y2, res;

		scanf("%d", &x1);
		scanf("%d", &y1);
		scanf("%d", &x2);
		scanf("%d", &y2);

		res = abs(x1-x2) + abs(y1-y2);
		printf("%d \n", res);		

	}

    return 0;
}
