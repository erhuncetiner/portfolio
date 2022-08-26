#include <iostream>
#include "stock.h"

using namespace std;
stock::stock(string& d, double& e, double& f){
//	name = d;
	
	cout << "Please enter the name of your stock." << endl << endl;
	buyPrice = e;
	currentPrice = f;
	quantity = 0;
//	string sharename;
	getline(cin, d);
	name = d;
//	stockIn(string& d, double& e, double& f);
}

void stock::stockIn(string& d, double& e, double& f){

//	name = name;
//	buyPrice = buyPrice;
//	currentPrice = currentPrice;
//	
//	cout << name << endl;
	
}



	void stock::sell(int bid){
		if (bid <= quantity){
		
		cout << bid << " " << name << " shares were sold at the price of " << currentPrice << ". Your P/L per share is equal to " << 
		currentPrice - buyPrice << " liras and your total P/L is equal to " << bid*(currentPrice - buyPrice)<<
		" liras." << endl << endl;
		quantity = quantity - bid;
		cout << "You now have " << quantity << " " << name << " stocks left in your portfolio." << endl << endl;
	}	
		else {
			cout << "You don't have that many shares in your portfolio. " << endl << endl;
		}
	}
	
	void stock::buy(int bid){
		cout << bid << " " << name << " shares were bought at the price of " << currentPrice << " liras." << endl << endl; 
		quantity = quantity + bid;
		cout << "You now have " << quantity << " " << name << " stocks in your portfolio." << endl << endl;
	}
	
	void stock::stockValue(string d, double k, double stVal){
		double stockValue;
		stockValue = quantity*currentPrice;
		cout << "The total value of owned " << d << " shares is equal to " << quantity*k << " liras." << endl << endl;		
	}
//void stock::sell(int bid){
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

//void stock::buy(int bid)
//	{
//		cout << bid << " " << name << " shares were bought at the price of " << currentPrice << " liras." << endl << endl; 
//		quantity = quantity + bid;
//		cout << "You now have " << quantity << " " << name << " stocks in your portfolio." << endl << endl;
//	}

