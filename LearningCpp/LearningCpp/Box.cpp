#include "stdafx.h"
#include "Box.h"

double Box::getVolume(void)
{
	return length * width * height;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setHeight(double hei)
{
	height = hei;
}

void Box::setWidth(double wid)
{
	width = wid;
}