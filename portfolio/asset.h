#include <iostream>

#pragma once

//#include "stock.h"
using namespace std;

class asset{
	public:
		string name;
		int asset_count;
		double total_value;
		
//		stock memberStock;
		
		asset(string& name, int co);
		
		void expandedView(string name, int asset_count, double total_value);
		void totalVal(string name, int asset_count, double total_value);
};
