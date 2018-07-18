#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, val;
	vector <int> arr;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){
		scanf("%d", &m);
		for (int y = 0; y < m; y++){
			scanf("%d", &val);
			arr.push_back(val);
		}
	}

	sort(arr.begin(),arr.end());
	vector <int>::iterator iter = unique(arr.begin(), arr.end()); 
	arr.resize(distance(arr.begin(),iter));

	printf("%d \n", (int)arr.size());

    return 0;
}
