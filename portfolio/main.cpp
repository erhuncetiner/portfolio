#include <iostream>
#include <string>
#include <fstream>
#include<bits/stdc++.h>

#include <stdlib.h>
#include <sstream>
#include <cmath>

#include "stock.h"
#include "asset.h"
#include "input.h"
//#include "valueCalc.cpp"
using namespace std;


int main(int argc, char** argv){
	
//	string size;
//
//	std::cin >> size;
//	
//	int *array = new int[size];
//	
//	delete [] array;
	
	
	
	
//	string values;
	getBuyPrices();
	
//	cout << values[3] << endl;
//	cout << values << endl;
//	printWords(values);
//	cout << number_of_lines;
	
	int assetc;
	string assetn;
	asset asset_01(assetn,assetc);
	int bid = 400;
	double b = 12.31;
	double cur = 23.11;
	double b2 = 18.47;
	double cur2 = 17.94;
	string sharename, sharename2;
	double stockVal, stockVal2;
	
//for (int i = 0; i < assetc; i++){	
	getline(cin, sharename2);
	stock garan(sharename2, b2, cur2);
	getline(cin, sharename);
	stock akbnk(sharename, b, cur);
	garan.buy(bid+80);
	garan.sell(bid);
	akbnk.buy(bid);
	akbnk.sell(bid-4);
	garan.stockValue(sharename2, cur2, stockVal2);
	akbnk.stockValue(sharename, cur, stockVal);
	
//}

//	stock akbnk[assetc];
//	stock* akbnk = new stock[assetc];
	

	
	

	
	
//	cin >> buy;
	return 0;
}
