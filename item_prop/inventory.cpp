#include "inventory.h"

using namespace std;
inventory::inventory(string ow, apparel armor, weapons wepo){
	owner = ow;
	cloth_01 = armor;
	wep = wepo;
	
	equipped();

}

void inventory::equipped(){
	
	cout << owner << " has equipped " << wep.wear << " " << wep.material << " " << wep.type << "." << endl;
	
}
