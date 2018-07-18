#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string s = "AHIMOTUVWXY";

	for (int x = 0; x < n; x++){
		string name;
		cin >> name;

		int y = 0;
		bool b = true;

		while (b && y < name.length()){
			if (s.find(name[y]) == -1)
				b = false;
			y++;
		}

		int lowerB = 0, upperB = name.length()-1;
		while ((lowerB < upperB) && b){
			if (name[lowerB] != name[upperB])
				b = false;
			lowerB++;
			upperB--;
		}

		if (b)
			printf("YES \n");
		else
			printf("NO \n");

	}

    return 0;
}
