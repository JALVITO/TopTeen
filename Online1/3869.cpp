#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, req, t=0, floor = 1;
	cin >> n;

	for (int x = 0; x < n; x++){
		cin >> req;

		//int dif = abs(req - floor);
		//cout << "diff: " << dif << endl;

		t += abs(req - floor);
		floor = req;
	}

	//cout << "OUT"<< endl;
	t += floor - 1;
	cout << t << endl;

    return 0;
}
