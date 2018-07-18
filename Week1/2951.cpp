#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string order(string n){
    vector <int> dig;
    for (int x = 0; x < n.length(); x++){
        dig.push_back(n[x]);
    }

    sort(dig.begin(),dig.end());

    string s = "";
    for (int m = 0; m<dig.size(); m++)
        s += dig[m];

    return s;
}


int main(){

    int n;
    string b;
    cin >> n;
    vector <string> arr(n);
    getline(cin, b);

    for (int x = 0; x < n; x++){
        string num;
        getline(cin, num);
        arr[x] = order(num);
    }

    sort(arr.begin(),arr.end());

    vector <string>::iterator iter = unique(arr.begin(), arr.end()); 
    arr.resize(distance(arr.begin(),iter));

    cout << arr.size() << endl;
    return 0;
}
