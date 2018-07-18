#include <stdio.h>

using namespace std;

int main()
{
	int n, m, times = 0, sum = 0;
	scanf("%d", &n);

	while(n != -1){
		sum = 0;
		times = 0;
		for (int x = 0; x < n; x++){
			scanf("%d", &m);
			sum += m;
			//printf("times: %d \n", times);
			if (sum%100 == 0)
				times++;

		}

		printf("%d \n", times);
		scanf("%d", &n);
	}

    return 0;
}
