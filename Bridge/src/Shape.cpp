/*
 * Copyright
 *
*/
#include <iostream>
#include "./Shape.h"
#include "DrawPaint.h"
#include "FillPaint.h"

Shape::Shape() : paint(NULL) {
	paint = new DrawPaint();
	//paint = new FillPaint();
}

Shape::~Shape() {
	delete paint;
}

void Shape::paintEllipse(std::string shape)
{
	paint->paintEllipse(shape);
}

void Shape::paintPolygon(std::string shape)
{
	paint->paintPolygon(shape);
}
