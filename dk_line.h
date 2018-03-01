#ifndef dk_line_h
#define dk_line_h

#include <stdio.h>

// Point description
typedef struct tagPoint
{
	int x;
	int y;
}Point;

// Line description
typedef struct tagLine
{
	Point *A;
	Point *B;
}Line;

// Init interface
Line *createLine(Point *A, Point *C);
Line *createLine(Point *B, Point *C);

void destroyLine(Line *aLine);

float lenghLine(Line *aLine);
#endif /* dk_line_h */
