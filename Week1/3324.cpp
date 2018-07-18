#include <stdio.h>

using namespace std;

int main()
{

	int arr[8], sum = 0, may;

	for (int x = 0; x < 8; x++){
		scanf("%d", &arr[x]);
		if (x < 4)
			sum += arr[x];
	}

	may = sum;

	for (int y = 0; y < 8; y++){
		sum = sum - arr[y%8] + arr[(y+4)%8];
		if (sum > may)
			may = sum;
	}

	printf("%d \n", may);

    return 0;
}
