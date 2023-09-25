#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Apartment.h"
#include "Imot.h"

Apartment::Apartment()
{
	numberOfRooms = 0;
	floor = 0;
};


Apartment::~Apartment()
{
};

Apartment::Apartment(int pNumberOfRooms, int pFloor, char *pAddress, char *pName, float pArea, float pPrice):Imot(pAddress, pName,  pArea, pPrice)
{
	numberOfRooms = pNumberOfRooms;
	floor = pFloor;
}

void Apartment::print()
{
	printf("---------------------Apartment owned---------------------\n");
	
	printf("Address: %s\n", address);
	printf("Owner: %s\n", Name);
	printf("Price: %f\n", price);
	printf("Area: %f\n", area);
	printf("Number of Rooms: %d\nFloor Num. : %d\n", numberOfRooms, floor);
	
}