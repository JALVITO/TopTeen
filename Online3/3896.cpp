#include <stdio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	int w, h, ax, ay, bx, by;
	int x1, y1, x2, y2;
	int diffx, diffy;

	scanf("%d", &w);
	scanf("%d", &h);
	scanf("%d", &ax);
	scanf("%d", &ay);
	scanf("%d", &bx);
	scanf("%d", &by);


	diffx = ax-bx;
	diffy = ay-by;

	if (abs(diffy) <= abs(diffx)){
		x1 = min(ax, bx);
		x2 = max(ax, bx);
		y1 = 0;
		y2 = h;
	}

	else{
		y1 = min(ax, bx);
		y2 = max(ax, bx);
		x1 = 0;
		x2 = w;
	}

	printf("%d %d %d %d", x1, y1, x2, y2);

    return 0;
}
