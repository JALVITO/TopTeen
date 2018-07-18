#include <stdio.h>

using namespace std;

int main()
{
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);

	int add = a+b;
	int sub = a-b;
	int mul = a*b;
	int div = a/b;
	int mod = a%b;

	printf("%d \n", add);
	printf("%d \n", sub);
	printf("%d \n", mul);
	printf("%d \n", div);
	printf("%d \n", mod);

    return 0;
}
