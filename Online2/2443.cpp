#include <stdio.h>
#include <cmath>

using namespace std;

bool prime(int num){
	bool p = true;

	if (num == 1)
		p = false;

	else{
		int x = 2;
		while(p && x <= sqrt(num)){
			if (num%x == 0)
				p = false;
			x++;
		}
	}

	return p;
}

int main(){
	int n, k, max = 0, obj = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	int mat[n][k];
	int ans[n];
	bool empate = false;

	for (int x = 0; x < n; x++){
		ans[x] = 0;
		for (int y = 0; y < k; y++){
			scanf("%d", &mat[x][y]);
			if (prime(mat[x][y])){
				ans[x]++;
			}
		}

		if (ans[x] > max){
			max = ans[x];
			obj = x+1;
		}
	}

	for (int z = 0; z < n; z++){
		if (ans[z] == max && z != obj-1)
			empate = true;
	}

	if (!empate)
		printf("Object %d wins with %d rare characteristics \n", obj, max);
	else
		printf("No winner \n");

	return 0;
}
