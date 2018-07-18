#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int arr[n];

	for (int x = 0; x < n; x++){
		scanf("%d", &arr[x]);
	}

	sort(arr, arr+n);

	for (int y = 0; y < n/2+1; y++){
		sum += arr[y]/2+1;
	}

	printf("%d", sum);

    return 0;
}
