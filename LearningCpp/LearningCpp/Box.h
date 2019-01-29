#pragma once

class Box
{
public:
	double length;
	double width;
	double height;

	double getVolume(void);
	void setLength(double len);
	void setHeight(double hei);
	void setWidth(double wid);
};
