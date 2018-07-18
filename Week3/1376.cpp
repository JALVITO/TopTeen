#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector <int> dig;
vector <int> legacy;

void sortAndArrange(){
	int min = n%10;
	printf("%d", min);
	dig.push_back(min);

	sort(dig.begin(), dig.end());

	int y = 0;
	while(dig.at(y) <= min && y < dig.size()-1){
		y++;
	}

	printf("%d", dig.at(y));
	dig.erase(dig.begin()+y); 
}

int main()
{
	bool cont = true;
	scanf("%d", &n);

	while (n > 10){
		dig.push_back(n%10);
		legacy.push_back(n%10);
		n/=10;
	}

	sort(dig.begin(), dig.end());

	//legacy se llena alreves, legacy.at(0) es unidades, no max

	while (dig.size() > 0 && cont){

		if (legacy.at(0) == dig.at(0)){
			printf("%d",dig.at(0));
			dig.erase(dig.begin()); 
		}
		else{
			sortAndArrange();
			cont = false;
		}
	}


	for (int x = 0; x < dig.size(); x++)
		printf("%d", dig.at(x));

	printf("\n");

    return 0;
}
