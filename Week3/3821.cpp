#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0, max = 0;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){

		sum = 0;
		int arr[10];

		for (int y = 0; y < 10; y++)
			scanf("%d", &arr[y]);

		sort(arr, arr+10);

		for (int z = 1; z < 9; z++)
			sum += arr[z];

		printf("%d %d \n", (x+1), sum);

		if (sum > max)
			max = sum;

	}

	printf("%d \n", max);

    return 0;
}
