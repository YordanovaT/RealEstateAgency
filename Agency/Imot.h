#pragma once

class Imot
{
public:
	char address[50];
	char Name[30];
	float price;
	float area;
public:
	Imot();
	~Imot();
	Imot(char *pAddress, char *pName, float pArea, float pPrice);
	virtual void print();
	int getPrice();
	
};

