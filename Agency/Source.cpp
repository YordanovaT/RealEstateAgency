#include "Agency.h"
#include "Imot.h"
#include "Apartment.h"
#include "House.h"
#include "Parcel.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	Agency Agn;

	Imot imot("ul. Vasil Aprilov", "Ivan", 89.9, 9000);
	//imot.printImot();
	Apartment ap(4, 6, "ul. Georgi Benkovski", "Petyr", 89.9, 9500);
	//Apartment ap(3, 1, "ul. Yordan Yovkov", "Dragan", 60, 5000);
	//Apartment ap3(4, 5, "ul. Valsil Levski", "Petkan", 120, 10000);
	//ap.print();
	House house(8, 2, 10, "ul. Ivan Vazov", "Dora", 105.4, 12000);
	//house.printImot();
	Parcel par(true, true, false, "Brezovsko shose 48", "Penka", 1000, 7500);
	//par.print();
	/*
	Agn[0] = p;
	Agn[1]
	p[0] = &imot;
	Agn[0].addProperty(p[0]);
	printf("\n");
	p[1] = &ap;
	Agn[1].addProperty(p[1]);
	//p->print();
	p[2] = &house;
	Agn[2].addProperty(p[2]);
	p[3] = &par;
	Agn[3].addProperty(p[3]);
	for (int i = 0; i < 4; i++)
	{
		p[i]->print();
	}
	*/
	
	Agn.addProperty(&ap);
	Agn.addProperty(&imot);
	Agn.addProperty(&house);
	Agn.addProperty(&par);
	Agn.print();
	
	printf("\n-------------------------After searching by price-------------------------\n");
	Agn.searchByPrice(5000,10000);
	
	Agn.BubbleSort(88, cf1);
	printf("\n-------------------------After deleting-------------------------\n");
	Agn.deleteProperty(&ap);
	Agn.print();


	return 0;
}