#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string s, s1, s2;
	int m;
	cin >> s;

	if (s.length()%2 == 0){
		m = s.length()/2;
	}

	else{
		m = s.length()/2 + 1;
	}

	s1 = s.substr(0, s.length()/2);
	s2 = s.substr(m, m);

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	if (s.length()%2 != 0){
		s1 += s[s.length()/2];
	}

	s1 += s2;

	cout << s1 << endl; 

    return 0;
}
