/*
 * Copyright
 *
*/
#include <iostream>
#include "./DrawPaint.h"

DrawPaint::DrawPaint() {
}

DrawPaint::~DrawPaint() {
}

void DrawPaint::paintEllipse( std::string shape )
{
	std::cout << "Draw Ellipse " << shape << std::endl;
}

void DrawPaint::paintPolygon( std::string shape )
{
	std::cout << "Draw Polygon " << shape << std::endl;
}
