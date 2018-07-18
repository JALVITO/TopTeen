#include <iostream>

using namespace std;

int main()
{

	int f;
	cin >> f;

	for (int x = 0; x < f; x++){

		int n, cont = 0;
		string t, p;
		cin >> t >> p;

		n = t.find(p);

		while (n != -1){
			cont++;
			//cout << n << endl;
			t.erase(n, p.length());
			n = t.find(p);
			//cout << t << endl;
		}

		cout << cont << endl;
	}

    return 0;
}
