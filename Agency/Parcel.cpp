#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Parcel.h"
#include "Imot.h"

Parcel::Parcel()
{
	water = false;
	energy = false;
	nearRoad = false;
};


Parcel::~Parcel()
{
};

Parcel::Parcel(bool pWater, bool pEnergy, bool pNearRoad, char *pAddress, char *pName, float pArea, float pPrice) :Imot(pAddress, pName, pArea, pPrice)
{
	water = pWater;
	
	energy = pEnergy;
	
	nearRoad = pNearRoad;
	
}

void Parcel::print()
{
	printf("---------------------Parcel owned---------------------\n");
	
	printf("Address: %s\n", address);
	printf("Owner: %s\n", Name);
	printf("Price: %f\n", price);
	printf("Area: %f\n", area);
	printf("Is there water: %d\n", water);
	printf("Is there energy: %d\n", energy);
	printf("Is it near road: %d\n", nearRoad);

}
