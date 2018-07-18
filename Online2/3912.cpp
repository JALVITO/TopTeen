#include <stdio.h>
#include <string>
#include <cstring>

//strlen(s);

using namespace std;

int main()
{
	char s[21];
	bool b = true;
	scanf("%s", s);

	for (int x = 0; x < strlen(s); x++){
		if (s[x] == 'i')
			b = false;
	}

	if (b)
		printf("S \n");
	else
		printf("N \n");

    return 0;
}
