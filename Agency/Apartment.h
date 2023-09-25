#pragma once
#include "Imot.h"
#include "Apartment.h"


class Apartment:public Imot
{
	int numberOfRooms;
	int floor;
public:
	Apartment();
	Apartment(int pNumberOfRooms, int pFloor, char *pAddress, char *pName, float pArea, float pPrice);//:Imot( char *pAddress, char *pName, float pArea, float pPrice);
	~Apartment();
	void print();
};

