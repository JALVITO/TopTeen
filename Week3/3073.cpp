#include <stdio.h>
#include <string>
#include <cstring>

//strlen(s);

using namespace std;

int main()
{
	int n;
	char s[101];
	scanf("%d", &n);

	for (int x = 0; x < n; x++){
		scanf("%s", s);

		if (strlen(s) <= 10)
			printf("%s \n", s);
		else
			printf("%c%d%c \n", s[0], (int)(strlen(s)-2), s[strlen(s)-1]);
	}

    return 0;
}
