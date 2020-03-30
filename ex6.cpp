#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Account
{
private:

	double money = 100;

public:

	void plata(const double& price)
	{
		money -= price;

		fstream fin;
		fstream fin2;

		fin.open("date_out.txt", ios::app);
		fin2.open("bani.txt", ios::app);

		fin << "OUT " << price << " " << money << '\n';
		fin2 << money << '\n';

		fin.close();
		fin2.close();
	}

	void incasare(const double& price)
	{
		money += price;

		fstream fin;
		fstream fin2;

		fin.open("date_out.txt", ios::app);
		fin2.open("bani.txt", ios::app);

		fin << "IN " << price << " " << money << '\n';
		fin2 << money << '\n';

		fin.close();
		fin2.close();
	}

	void sold_disponibil()
	{
		cout << "Sold: " << money;
	}

	void read_istoric()
	{

		ifstream myReadFile;
		myReadFile.open("date_out.txt");

		int var;
		char output[100];
		if (myReadFile.is_open())
			while (!myReadFile.eof())
			{
				myReadFile >> output;
				if (atoi(output) > 0)
					var = atoi(output);
			}

		money = var;
		myReadFile.close();
	}
};
