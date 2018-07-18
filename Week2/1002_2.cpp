#include <iostream>
#include <algorithm>
#include <iterator>
#include <iomanip>

using namespace std;

string generate(int l){
	string str;

	for (int x = 0; x < l; x++){
		if ((rand() % 9) == 1)
			str += "#";
		else
			str += ".";
	}

	cout << str << endl;

	return str;
}

int main()
{
	int n, m;
	string s;
	cin >> n;

	for (int c = 0; c < n; c++){
		cin >> m;
		cin.ignore();
		int mat[m][m], ver[m][m], hor[m][m];

		//Rellena arreglo inicial
		for (int x = 0; x < m; x++){
			getline(cin, s);
			for (int y = 0; y < m; y++){
				if (s[y] == '#')
					mat[x][y] = 0;
				else
					mat[x][y] = 1;
			}
		}


		//Primer renglon vertical
		for (int f = 0; f < m; f++){
			ver[0][f] = mat[0][f];
		}

		//Siguientes renglones verticales
		for (int i = 1; i < m; i++){
			for (int j = 0; j < m; j++){
				if (mat[i][j] == 1){
					if (ver[i-1][j] == 0){
						ver[i][j] = 1;
					}
					else{
						ver[i][j] = ver[i-1][j] + 1;
					}
				}
				else{
					ver[i][j] = 0;
				}
			}
		}

		//Primer renglon horizontal
		for (int f = 0; f < m; f++){
			hor[f][0] = mat[f][0];
		}

		//Siguientes renglones horizontal
		for (int s = 1; s < m; s++){
			for (int t = 0; t < m; t++){
				if (mat[t][s] == 1){
					if (hor[t][s-1] == 0){
						hor[t][s] = 1;
					}
					else{
						hor[t][s] = hor[t][s-1] + 1;
					}
				}
				else{
					hor[t][s] = 0;
				}
			}
		}

		int max = 0;
		for (int z = 0; z < m; z++){
			for (int w = 0; w < m; w++){
				if (ver[z][w] == hor[z][w] && ver[z][w] > max)
					max = ver[z][w];
				cout << "(" << z << "," << w << ") " << ver[z][w] << "-" << hor[z][w] << " max: " << max << endl;
			}
		}

		for (int a = 0; a < m; a++){
			for (int b = 0; b < m; b++){
				//cout << ver[a][b] << " ";
				mat[a][b] = ver[a][b] - hor[a][b];
			}
			//cout << endl;
		}

		//cout << endl;

		for (int c = 0; c < m; c++){
			for (int d = 0; d < m; d++){
				cout << setw(3) << mat[c][d] << " ";
			}
			cout << endl;
		}
		
		cout << max << endl;


	}

    return 0;
}
