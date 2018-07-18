#include <stdio.h>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int n, g, points = 0;
	scanf("%d", &n);
	scanf("%d", &g);

	int arr[n];

	for (int x = 0; x < n; x++){
		int s,r;

		scanf("%d", &s);
		scanf("%d", &r);
		arr[x] = s-r;
	}

	sort(arr, arr+n, greater<int>());

	int y = 0;
	while (arr[y] > 0 && y < n){
		y++;
	}

	points += y*3;
	//printf ("%d \n", points);
	
	while (g > 0 && y < n){

		while (g > 0 && arr[y] < 1){
			g--;
			arr[y]++;
		}

		y++;
	}

	for (int z = points/3; z < n; z++){
		if (arr[z] == 0)
			points++;
		if (arr[z] == 1)
			points += 3;
	}


	printf ("%d \n", points);

    return 0;
}
