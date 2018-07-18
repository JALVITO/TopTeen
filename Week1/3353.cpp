#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, total = 0;
	scanf("%d", &n);
	scanf("%d", &m);

	int arr[n];

	for (int x = 0; x < n; x++){
		scanf("%d", &arr[x]);
	}

	sort(arr, arr+n);

	for (int y = 0; y < m; y++){
		if (arr[y] < 0)
			total -= arr[y];
	}

	printf("%d \n", total);

    return 0;
}
