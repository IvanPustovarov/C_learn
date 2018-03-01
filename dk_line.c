#include "dk_line.h"
#include <stdlib.h>
#include <math.h>



Point *copyPointWithPoint(Point *aPoint);

Line *createLine(Point *A, Point *C)
{
	Line *theResult = NULL;

	if (NULL != A && NULL != C)
	{
		theResult = (Line *)malloc(sizeof(Line));
		if (NULL != theResult)
		{
			theResult->A = copyPointWithPoint(A);
			theResult->C = copyPointWithPoint(C);
		}
	}

	return theResult;
}

Line *createLine(Point *B, Point *C)
{
	Line *theResult = NULL;

	if (NULL != B && NULL != C)
	{
		theResult = (Line *)malloc(sizeof(Line));
		if (NULL != theResult)
		{
			theResult->B = copyPointWithPoint(B);
			theResult->C = copyPointWithPoint(C);
		}
	}

	return theResult;
}

void destroyLine(Line *aLine)
{
	if (NULL != aLine)
	{
		free(aLine->A);
		free(aLine->C);
		free(aLine->B);

		free(aLine);
	}
}

float lenghLineAC(Line *aLine)
{
	float theResult = 0.0;

	if (NULL != aLine)
	{
		float dX = (aLine->A->x - aLine->C->x);
		float dY = (aLine->A->y - aLine->C->y);
		theResult = sqrt(dX*dX + dY*dY);
	}

	return theResult;
}

float lenghLineBC(Line *aLine)
{
	float theResult = 0.0;

	if (NULL != aLine)
	{
		float dX = (aLine->B->x - aLine->C->x);
		float dY = (aLine->B->y - aLine->C->y);
		theResult = sqrt(dX*dX + dY*dY);
	}

	return theResult;
}



Point *copyPointWithPoint(Point *aPoint)
{
	Point *theResult = (Point *)malloc(sizeof(Point));
	if (NULL != theResult)
	{
		theResult->x = aPoint->x;
		theResult->y = aPoint->y;
	}

	return theResult;
}

square = lenghLine(AC)*lenghLine(BC);
