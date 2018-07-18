#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){
		float d, v1, v2, m;

		scanf("%f", &d);
		scanf("%f", &v1);
		scanf("%f", &v2);
		scanf("%f", &m);

		float t = d/(v1+v2);
		float s = t*m;
			
		printf ("%.2f \n", s);
	}

    return 0;
}
