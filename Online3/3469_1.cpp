#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0, limit = 0;
	scanf("%d", &n);

	int donations[n], accum[n];
	for (int x = 0; x < n; x++){
		scanf("%d", &donations[x]);
		sum += donations[x];
		accum[x] = sum;
		//printf("%d ", accum[x]);
		//printf("\n");
	}

	int q;
	scanf("%d", &q);
	//printf("%d ", accum[n-1]);

	//limits
	for (int y = 0; y < q; y++){
		scanf("%d", &limit);

		if (accum[n-1] < limit)
			printf("none \n");
		else{
			int z = 0;
			while (limit > accum[z]){
				//printf("limit: %d \n", limit);
				//printf("accum: %d \n", accum[z]);
				z++;
			}
			printf("%d \n", z+1);
		}

	}

    return 0;
}
