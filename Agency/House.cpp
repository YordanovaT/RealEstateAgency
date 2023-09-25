#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "House.h"
#include "Imot.h"

House::House()
{
	numOfRooms = 0;
	numOfFloors = 0;
	backyardArea = 0;
};


House::~House()
{
};

House::House(int pNumberOfRooms, int pNumberOfFloors, float pBackyardArea, char *pAddress, char *pName, float pArea, float pPrice) :Imot(pAddress, pName, pArea, pPrice)
{
	numOfRooms = pNumberOfRooms;
	numOfFloors = pNumberOfFloors;
	backyardArea = pBackyardArea;
}

void House::printImot()
{
	printf("---------------------House owned---------------------\n");
	
	printf("Address: %s\n", address);
	printf("Owner: %s\n", Name);
	printf("Price: %f\n", price);
	printf("Area: %f\n", area);
	printf("Number of Rooms: %d\n", numOfRooms);
	printf("Number of floors: %d\n", numOfFloors);
	printf("Backyard area: %f\n", backyardArea);

}