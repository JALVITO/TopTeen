//#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int r,c,s,num;
	cin >> r >> c;
	int mat[r][c];
	//scanf("%d", &r);
	//scanf("%d", &c);

	for (int x = 0; x < r; x++){
		for (int y = 0; y < c; y++){
			//scanf("%d", &s);
			//mat[x][y] = s;
			cin >> mat[x][y];
		}
	}

	int wins = 0;

	for (int a = 0; a < r; a++){
		for (int b = 0; b < c; b++){
			num = mat[a][b];
			//cout << num << endl;

			//top
			bool state = true;
			int diff = 1;
			while (a-diff >= 0 && state){
				if (mat[a-diff][b] >= num)
					state = false;
				diff++;
			}

			if (state)
				wins++;
			//printf("top wins : %d \n", state);

			//bottom
			state = true;
			diff = 1;
			while (a+diff < r && state){
				if (mat[a+diff][b] >= num){
					state = false;
				}
				diff++;
			}

			if (state)
				wins++;
			//printf("bottom wins : %d \n", state);

			//right
			state = true;
			diff = 1;
			while (b+diff < c && state){
				if (mat[a][b+diff] >= num)
					state = false;
				diff++;
			}

			if (state)
				wins++;
			//printf("right wins : %d \n", state);

			//left
			state = true;
			diff = 1;
			while (b-diff >= 0 && state){
				//printf("inside \n");
				if (mat[a][b-diff] >= num){
					state = false;
					//printf("state \n");
				}
				diff++;
			}

			if (state){
				wins++;
				//printf("win added \n");
			}
			//printf("left wins : %d \n", state);
			//printf("WINS : %d \n", wins);
		}
	}

	//printf("%d \n", wins);
	cout << wins << endl;

    return 0;
}
