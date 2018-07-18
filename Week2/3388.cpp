#include <stdio.h>
#include <vector>
#include <algorithm>
#import <cmath>
#import <functional>

using namespace std;

int main()
{
	int n, m, cont = 0;
	scanf("%d", &n);

	while (n > 0){

		m = n;
		vector <int> dig;

		while (m > 0){
			dig.push_back(m%10);
			m/=10;
		}

		sort(dig.begin(), dig.end(), greater<int>());

		for (int y = 0; y < dig.size(); y++){
			m += dig.at(y) * pow(10, y);
		}

		//printf("%d - %d \n", n, m);

		n = n - m;
		cont++;

		//printf("%d \n", n);
		
	}

	printf("%d \n", cont);

    return 0;
}
