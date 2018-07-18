#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0, limit = 0;
	scanf("%d", &n);

	int donations[n];
	for (int x = 0; x < n; x++)
		scanf("%d", &donations[x]);

	int q;
	scanf("%d", &q);

	//limits
	for (int y = 0; y < q; y++){
		scanf("%d", &limit);

		int z = 0;
		bool cont = true;
		sum = 0;
		while (z < n && cont){
			sum += donations[z];
			//printf("sum: %d \n", sum);

			if (sum >= limit){
				printf("%d \n", z+1);
				cont = false;
			}

			z++;
		}

		if (sum < limit)
			printf("none \n");

	}

    return 0;
}
