#include <iostream>

using namespace std;

int main()
{
	int n, cont;
	string s1, s2;
	cin >> n;

	for (int x = 0; x < n; x++){
		cin >> s1 >> s2;
		cont = 0;
		for (int y = 0; y < s1.length(); y++){
			if (s1[y] != s2[y])
				cont++;
		}

		cout << cont << endl;
	}

    return 0;
}
