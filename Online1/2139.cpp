#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int prev, n;
    bool s;
    while (cin >> a >> b){

    	int x = 0;
    	prev = -1;
    	s = true;

    	while (x < a.length() && s){
    		n = b.find(a[x]);
    		/*
    		cout << "searching: " << a[x] << endl;
    		cout << "n: " << n << endl;
    		cout << "prev: " << prev << endl;
			*/
    		if (n == -1)
    			s = false;
    		//else if(n == 0)
    			//b[0] = '#';
    		else{
    			for (int m = 0; m <= n; m++)
    				b[m] = '#';
    		}

    		//cout << "s: " << s << endl;
    		//cout << "b: " << b << endl;

    		prev = n;
    		x++;
    	}

    	if (s)
    		cout << "Yes" << endl;
    	else
    		cout << "No" << endl;


    }

    return 0;
}
