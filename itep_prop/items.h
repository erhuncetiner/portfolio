#include <conio.h>
#include <iostream>

#pragma once

using namespace std;

class items{
	public:
		double value;
		double weight;
		double rarity;
		
		items(double weight, int rarity);
		
		void showInfo();
		
//		void getValue();
//		void getWeight();
//		void seeRarity();
};
