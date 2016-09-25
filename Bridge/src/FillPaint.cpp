/*
 * Copyright
 *
*/
#include <iostream>
#include "./FillPaint.h"

FillPaint::FillPaint() {
}

FillPaint::~FillPaint() {
}

void FillPaint::paintEllipse( std::string shape )
{
	std::cout << "Draw filled Ellipse " << shape << std::endl;
}

void FillPaint::paintPolygon( std::string shape )
{
	std::cout << "Draw filled Polygon " << shape << std::endl;
}
