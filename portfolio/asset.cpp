#include <iostream>
#include <string>
#include <fstream>

#include <stdlib.h>
#include <sstream>
#include <cmath>

#include "asset.h"
//#include "stock.h"

using namespace std;

asset::asset(string& t, int co){
	
	cout << "What should your portfolio be named?" << endl << endl;
	getline(cin,t);
	name = t; // Örneðin denizbank'taki portföy
	
	cout << "How many stocks are there in portfolio: " << name << "? " << endl << endl;
	cin >> co;
	asset_count = co;
	
}

	
