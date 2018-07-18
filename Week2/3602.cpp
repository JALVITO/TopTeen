#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	if (n == 11 || n == 12)
		printf("6 \n");
	else if (n == 4 || n == 9 || n == 0 || n == 5)
		printf("4 \n");
	else if (n == 1 || n == 2 || n == 6 || n == 10)
		printf("3 \n");
	else
		printf("5 \n");

    return 0;
}