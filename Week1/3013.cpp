#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){

		int p = 2;
		int stops;
		scanf("%d", &stops);

		for (int y = 1; y < stops; y++)
			p *= 2;

		printf ("%d \n", --p);
	}

    return 0;
}
