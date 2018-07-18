#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	long double n = 0, s1 = 0; 
	scanf("%Lf", &n);

	//s1 = 159999999943862498*8;
	//printf("%Lf \n", s1);

	while(n != 0){

		s1 = floor(sqrt(1+8*n));

		//printf("%Lf \n", s1);
		
		if (1+8*n == s1*s1)
			printf("YES \n");
		else
			printf("NO \n");
		

		scanf("%Lf", &n);

	}

    return 0;
}
