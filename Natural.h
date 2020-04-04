#pragma once
#include <Windows.h>
#include<iostream>
using namespace std;
enum Sign
{
	plus, minus
};

class Natural
{
private:
	int size = 1;
	char* numb = nullptr;
public:
	//construct & destruct
	Natural() {
		size = 1;
		numb = new char[size];
		numb[0] = 0;
	}
	Natural(int size, char* natural) {
		this->size = size;
		this->numb = new char[size];
	}
	
	Natural(char mNumber[]) {
		this->size = sizeof(mNumber);
		this->numb = mNumber;
	}
	~Natural()
	{
		delete[] numb;
	}
	//methods:

	//N-1						nuzhno dopilit`
	int COM_NN_D(Natural first, Natural second) {
		if (sizeof(first) > sizeof(second)) { return 2; }
		else if (sizeof(first) == sizeof(second)) { return 0; }
		else { return 1; }
	}

	//N-2	nemnogo podpil
	bool NZER_N_B(Natural number) {
		if (number.size!=0 && number.numb != 0) { return true; }
		else { return false; }
	}

	//N-3
	Natural ADD_1N_N(Natural number) {
		int count = 1;
		Natural c;
		if (c.numb[this->size-1]!=9)
		{
			c.numb[this->size - 1]++;
		}
	}

	//N-5 EBUCHIE POFIKSIKI

	Natural SUB_NN_N(Natural first, Natural second) {
		int res = COM_NN_D(first, second);
		
		if (res == 2 || res == 0) { res = NULL; res = first.numb - second.numb; cout << res << endl; }
	}

	//N-4
	Natural ADD_NN_N(Natural first, Natural second) {

	}
};



