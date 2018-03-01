#include <stdio.h>
#include "dk_line.h"

int main(int argc, const char * argv[])
{
    int square;

    int x1, x2, y1, y2;

    do  {

    printf("Press coordinates of point A:\n ");

    scanf("%d%d", &x1, &y1);
    printf("\n");
    printf("Coordinates of point A is: %d, %d\n", x1, y1);
    printf("\n");

    printf("Press coordinates of point B:\n ");

    scanf("%d%d", &x2, &y2);
    printf("\n");
    printf("Coordinates of point B is: %d, %d\n", x2, y2);
    printf("\n");

        }while(x1==x2 || y1==y2);

	Point A = {x1,y1};
	Point B = {x2,y2};
	Point C = {x2,y1};

	Line *AC = createLine(&A, &C);
	Line *BC = createLine(&B, &C);

    printf("Square of rectangle is:%d", square);

	destroyLine(AC);
	destroyLine(BC);
	return 0;
}
