#define _CRT_SECURE_NO_WARNINGS
#include "Imot.h"
#include <stdio.h>
#include <string.h>


Imot::Imot()
{
	address[0] = 0;
	Name[0] = 0;
	price = 0;
	area = 0;
};


Imot::~Imot()
{
};

Imot::Imot(char *pAddress, char *pName, float pArea, float pPrice)
{
	strcpy(address, pAddress);
	strcpy(Name, pName);
	price = pPrice;
	area = pArea;
};

void Imot::print()
{
	printf("---------------------Property owned---------------------\n");

	printf("Address: %s\n", address);
	printf("Owner: %s\n", Name);
	printf("Price: %f\n", price);
	printf("Area: %f\n", area);
}


int Imot::getPrice()
{
	return price;
}
