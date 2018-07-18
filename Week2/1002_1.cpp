#include <iostream>

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

	for (int i = 0; i < n; i++){
		cin >> m;
		cin.ignore();
		int mat[m][m];

		//Primer renglon
		getline(cin, s);
		//s = generate(m);
		for (int f = 0; f < m; f++){
			if(s[f] == '.')
				mat[0][f] = 1;
			else
				mat[0][f] = 0;
		}

		//Siguientes renglones
		for (int x = 1; x < m; x++){
			getline(cin, s);
			//s = generate(m);
			for (int y = 0; y < m; y++){
				if (s[y] == '.'){
					if (mat[x-1][y] == 0){
						mat[x][y] = 1;
					}
					else{
						mat[x][y] = mat[x-1][y] + 1;
					}
				}
				else{
					mat[x][y] = 0;
				}
			}
		}
		

		int max = 0;

		for (int f = 0; f < 2; f++){

			for (int r = 0; r < m; r++){
				int cont, val = mat[r][0];

				if (mat[r][0] == 0)
					cont = 0;
				else
					cont = 1;

				if (cont <= val && cont > max){
					max = cont;
				}

				for (int c = 1; c < m; c++){

					if (mat[r][c] == 0){
						cout << "valor es cero" << endl;
						val = 0;
						cont = 0;
					}

					else{

						if (mat[r][c-1] == 0){
							cout << "valor anterior es cero" << endl;
							val = mat[r][c];
							cont = 1;
						}

						else if (mat[r][c] <= val){
							cout << "valor actual menor o igual" << endl;
							cont++;
							val = mat[r][c];
						}

						else{
							cout << "valor actual mayor" << endl;
							cont++;
						}
					}

					if (cont <= val && cont > max){
						max = cont;
					}

					
					cout << "mat value: " << mat[r][c] << endl;
					cout << "coord: " << r << "," << c << endl;
					cout << "cont: " << cont << endl;
					cout << "val: " << val << endl;
					cout << "max: " << max << endl;
					cout << endl;
					
					

				}
			}

		}



		cout << max << endl;

		//Imprimir arreglo
		
		for (int a = 0; a < m; a++){
			for (int b = 0; b < m; b++){
				cout << mat[a][b] << " ";
			}
			cout << endl;
		}
		


	}

    return 0;
}
