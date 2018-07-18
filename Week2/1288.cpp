#include <iostream>

using namespace std;

int main()
{
	int n, sum;
	string s;
	cin >> n;

	for (int x = 0; x < n; x++){
		cin >> s;
		sum = 0;

		for (int y = 0; y < s.length(); y++)
			sum += s[y];

		if ((s[s.length()-1]%2 == 0) && (sum%3 == 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

    return 0;
}
