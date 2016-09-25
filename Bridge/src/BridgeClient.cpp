/*
 * Copyright
 *
*/
#include <iostream>
#include "BridgeClient.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

BridgeClient::BridgeClient() : shape(NULL){
	shape.push_back(new Circle());
	shape.push_back(new Rectangle());
	shape.push_back(new Triangle());
}

BridgeClient::~BridgeClient() {
	Shape* tmp;
	for(std::list<Shape*>::iterator itr = shape.begin(); itr != shape.end(); ++itr) {
		delete *itr;
	}
}

void BridgeClient::run()
{
	for(std::list<Shape*>::iterator itr = shape.begin(); itr != shape.end(); ++itr) {
		(*itr)->draw();
	}
}
