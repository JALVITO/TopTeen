#include <iostream>

using namespace std;

string generate(int l){
	string str;

	for (int x = 0; x < l; x++){
		if ((rand() % 100) < 5)
			str += "#";
		else
			str += ".";
	}

	cout << str << endl;
	return str;
}


int main()
{
	//srand(time(NULL));
	int n, m, max = 0, cont = 0;
	string s;
	cin >> n;

	for (int c = 0; c < n; c++){
		cin >> m;
		cin.ignore();
		int mat[m][m];

		//Rellena arreglo inicial
		for (int a = 0; a < m; a++){
			//getline(cin, s);
			s = generate(m);
			for (int b = 0; b < m; b++){
				if (s[b] == '.')
					mat[a][b] = 1;
				else
					mat[a][b] = 0;
			}
		}

		max = 0;

		for (int x = 0; x < m; x++){
			for(int y = 0; y < m; y++){

				cont = 0;

				if (mat[x][y] == 1){
					cont = 1;
					bool b = true;

					while (b && (x+cont < m) && (y+cont < m)){
						for (int diff = 0; diff < cont; diff++){
							if (mat[x+cont][y+diff] == 0 || mat[x+diff][y+cont] == 0)
								b = false;
						}

						if (mat[x+cont][y+cont] == 0)
							b = false;

						if (b)
							cont++;
					}

					if (cont > max)
						max = cont;
				}
			}
		}

		cout << max << endl;

	}

    return 0;
}
