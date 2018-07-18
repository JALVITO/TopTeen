#include <stdio.h>

using namespace std;

int main()
{
	int n;
	int arr[5];
	scanf("%d", &n);

	for (int x = 0; x < n; x++){

		for (int y = 0; y < 5; y++){
			scanf("%d", &arr[y]);
		}

		int z = 1;
		bool b = true;
		while (z < 5 && b){
			if (arr[z-1] != (arr[z]-1))
				b = false;
			z++;
		}

		if (b)
			printf("Y \n");
		else
			printf("N \n");
	}

    return 0;
}
