#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Imot.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

typedef unsigned char byte;
class Agency
{
public:
	char agencyName[20];
	Imot *arr[30];
	int count_Imoti;

public:
	Agency();
	~Agency();
	void addProperty(Imot *imot/*, char *pName*/);
	void deleteProperty(Imot *imot);
	void print();
	void BubbleSort(int reclen, int (*cmp)(byte **el1, byte **el2));
	friend int cf1(byte **el1, byte **el2);
	void searchByPrice(float strart, float end);
};

