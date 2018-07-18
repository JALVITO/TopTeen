#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
//#include <iostream>

using namespace std;

int main()
{
	int n, s;
	bool b = true;
	scanf("%d", &n);

	for (int x = 0; x < n; x++){

		vector <int> arr;
		scanf("%d", &s);

		if (s == 1)
			printf("0 \n");

		else{

			for (int y = 2; y <= sqrt(s); y++){
				if (s%y == 0){
					//printf("y: %d \n", y);
					arr.push_back(y);
					arr.push_back(s/y);
				}
			}

			if ((int)arr.size() == 0){
				printf("1 \n");
			}

			else{

				/*
				int v;
				cin >> v;
				cout << "found: " << (find(arr.begin(), arr.end(), v) == arr.end()) << endl;
				*/

				for (int z = 0; z < arr.size(); z++){
					//printf("comparing %d \n", arr[z]);
					vector <int> arr2;
					for (int w = 2; w <= sqrt(arr[z]); w++){
						if (arr[z]%w == 0){
							//printf("y: %d \n", y);
							//printf("considering %d and %d \n", w, arr[z]/w);
							if (find(arr.begin(), arr.end(), w) == arr.end()){
								arr2.push_back(w);
								arr2.push_back(arr[z]/w);
								//printf("adding %d and %d \n", w, arr[z]/w);
							}
							arr[z] = 0;
						}
					}

					if (arr2.size() != 1){
						arr.insert(arr.end(), arr2.begin(), arr2.end());
					}
				}
				
				sort(arr.begin(), arr.end());

				vector <int>::iterator iter = unique(arr.begin(), arr.end()); 
				arr.resize(distance(arr.begin(),iter));

				//cout << arr.size() << endl;

				if (arr[0] == 0)
					arr.erase(arr.begin());

				//cout << arr.size() << endl;
				/*
				for (int m = 0; m < arr.size(); m++)
					printf("%d \n", arr[m]);
				*/
				printf("%d \n", (int)arr.size());
			}
		}

	}

    return 0;
}
