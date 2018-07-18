#include <stdio.h>

using namespace std;

int main()
{
	int n, l;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){
		scanf("%d", &l);

		printf("%d \n", 3*l*l+2);

	}

    return 0;
}
