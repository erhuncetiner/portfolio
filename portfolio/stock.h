#include <iostream>

#pragma once

using namespace std;


class stock{
	public:
	string name;
	double buyPrice;
	double currentPrice;
	int quantity;
	int bid;
	
	stock(string& name, double& buyPrice, double& currentPrice);
//	stock(string& d, double& e, double& f);
	
	void stockIn(string& name, double& buyPrice, double& currentPrice);
	void stockValue(string name, double currentPrice, double stVal);
//	void stockIn(string& name, double& buyPrice, double& currentPrice);
	void sell(int bid);
	void buy(int bid);
	
	
//	void sell(int& bid){
//		if (bid <= quantity){
//		
//		cout << bid << " " << name << " shares were sold at the price of " << currentPrice << ". Your P/L per share is equal to " << 
//		currentPrice - buyPrice << " liras and your total P/L is equal to " << bid*(currentPrice - buyPrice)<<
//		" liras." << endl << endl;
//		quantity = quantity - bid;
//		cout << "You now have " << quantity << " " << name << " stocks left in your portfolio." << endl << endl;
//	}	
//		else {
//			cout << "You don't have that many shares in your portfolio. " << endl << endl;
//		}
//	}
//	
//	void buy(int& bid){
//		cout << bid << " " << name << " shares were bought at the price of " << currentPrice << " liras." << endl << endl; 
//		quantity = quantity + bid;
//		cout << "You now have " << quantity << " " << name << " stocks in your portfolio." << endl << endl;
//	}
	
};
