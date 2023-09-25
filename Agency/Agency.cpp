#include "Agency.h"
#include "Imot.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

Agency::Agency()
{
	agencyName[0] = 0;
	count_Imoti = 0;
}


Agency::~Agency()
{
};

void Agency::addProperty(Imot *imot /*, char *pName*/)
{
	//strcpy(agencyName, pName);

	if (count_Imoti > 30)
	{
		printf("The array is full!\n");
		return;
	}
	arr[count_Imoti] = imot;
	count_Imoti++;
}

void Agency::deleteProperty(Imot *imot)
{
	if (count_Imoti == 0)
	{
		printf("No more elements in the array!\n");
		return;
	}
	for (int i = 0; i < count_Imoti; i++)
	{
		if (arr[i] == imot)
		{
			arr[i]=arr[count_Imoti - 1];
		}
	}
	count_Imoti--;
}

void Agency::BubbleSort(int reclen, int(*cmp)(byte **el1, byte **el2))
{
	int i, j, FLAG = 1;
	byte *help = (byte*)calloc(reclen,1); //no clue if it's even ok to do that
	for (i = 0; FLAG; i++)
	{
		for (j = FLAG = 0; j < (count_Imoti - i - 1); j++)
		{
			if ((*cmp)((byte**) arr[j] + j*reclen, (byte**) arr[j] + (j + 1)*reclen))
			{
				memcpy(help, (*(byte**) arr[j]) + j*reclen, reclen);
				memcpy((*(byte**)arr[j]) + j*reclen, (*(byte**)arr[j]) + (j + 1)*reclen, reclen);
				memcpy((*(byte**)arr[j]) + (j + 1)*reclen, help, reclen);
				FLAG = 1;
			}
		}
	}
	free(help);
}

//why it showing an error when declarated: int Agency::cf1(Imot *el1, Imot *el2)????
int ::cf1(byte **el1, byte **el2)
{
	return ((*(unsigned long*)el1 + 80) > (*(unsigned long *)(el2 + 80))) ? 1 : 0;
}


void Agency::print()
{
	printf("Name of the Agency: %s", agencyName);

	for (int i = 0; i < count_Imoti; i++)
	{
		arr[i]->print();
	}
}





void Agency::searchByPrice(float start, float end)
{
	for (int i = 0; i < count_Imoti; i++)
	{
		if (arr[i]->getPrice()>=start && arr[i]->getPrice()<=end)
		{
			arr[i]->print();
		}
	}	
}
