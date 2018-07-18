#include <stdio.h>

using namespace std;

int main()
{
	int n;
	float s, res;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){
		scanf("%f", &s);
		res = 1/(s*s);

		printf ("%.4f \n", res);		

	}

    return 0;
}
