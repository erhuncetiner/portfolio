#include <conio.h>
#include <iostream>

#include "weapons.h"
#include "items.h"
#include "sword.h"
#include "mace.h"
#include "shirt.h"
#include "inventory.h"

using namespace std;

int main(int argv, char** argc){
	
	mace basic(1, 0.78, 5, 10, 2);
	sword knife(2, 0.2, 3, 80, 1);
	shirt red(3, 1, 10, 5);
	
//	basic.showInfo();
	basic.details();
//	knife.showInfo();
	knife.details();
//	red.showInfo();
	red.details();
	
	string selection;
	bool questionActive = 1;
	cout << "Which weapon do you want to equip? Mace or Sword? Type it in." << endl << endl;
	while (questionActive == 1){
	
	getline(cin, selection);
	if (selection == "Mace"){
		inventory equip_01("Erhun", red, basic);
		questionActive = 0;

	}
	
	else if (selection == "Sword"){
		inventory equip_01("Erhun", red, knife);
		questionActive = 0;
	}
	else {
		questionActive = 1;
		cout << "Try again with the correct syntax of the weapon you want to equip." << endl << endl;
	}
}
	return 0;
	
}
