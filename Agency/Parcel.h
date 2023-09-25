#pragma once
#include "Imot.h"

class Parcel:public Imot
{
	bool water;
	bool energy;
	bool nearRoad;
public:
	Parcel();
	~Parcel();
	Parcel(bool pWater, bool pEnergy, bool pNearRoad, char *pAddress, char *pName, float pArea, float pPrice);
	void print();
};

