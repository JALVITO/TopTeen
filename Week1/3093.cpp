#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

	string s;
	cin >> s;
	int rem = int(s[0])-64;

	for (int x = 1; x < s.length(); x++){
		rem = (rem * (int(s[x])-64)) % 26;
	}

	cout <<  setfill('0') << setw(2) << rem << endl;

    return 0;
}
