#include "inventory.h"

using namespace std;
inventory::inventory(string ow, apparel armor, weapons wepo){
	owner = ow;
	cloth_01 = armor;
	wep = wepo;
	
	equipped();
	netWorth();

}

void inventory::equipped(){
	
	cout << owner << " has equipped " << wep.wear << " " << wep.material << " " << wep.type << "." << endl;
	
}

void inventory::netWorth(){
	
	double totVal;
	totVal = wep.value + cloth_01.value;
	cout << owner << "'s net worth is equal to " << totVal << " golds." << endl;
	
}

