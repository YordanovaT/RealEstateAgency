#pragma once
#include "Imot.h"
class House:public Imot
{
	int numOfRooms;
	int numOfFloors;
	float backyardArea;
public:
	House();
	~House();
	House(int pNumberOfRooms, int pNumberOfFloors, float pBackyardArea, char *pAddress, char *pName, float pArea, float pPrice);
	void printImot();
};

