#include <conio.h>
#include <iostream>

#include "weapons.h"
#include "items.h"
#include "sword.h"
#include "mace.h"
#include "shirt.h"
#include "inventory.h"
#include "duel.h"
#include "plate_armor.h"

using namespace std;

int main(int argv, char** argc){

	mace basic(1, 0.71, 3, 15, 2);
	sword knife(2, 0.96, 3, 4, 1);
	shirt red(2, 1, 5, 5, 5);
	plate_armor plate_01(2, 0.6, 15, 50, 2);
	
	basic.details();
	knife.details();
	red.details();
	plate_01.details();
	
//	string selectionArmor;
//	bool armSelection = 1;
//	cout << "Which armor do you want to equip? Shirt or Plate? Type it in." << endl << endl;
//	while (armSelection == 1){
//	
//	getline(cin, selectionArmor);
//	if (selectionArmor == "Shirt"){
//		inventory equip_01("Erhun", red, basic);
//		inventory equip_02("Bot", plate_01, knife);
//		armSelection = 0;
//		duel(equip_01, equip_02);
//
//	}
//	
//	else if (selectionArmor == "Plate"){
//		inventory equip_01("Erhun", plate_01, knife);
//		inventory equip_02("Bot", red, basic);
//		armSelection = 0;
////		duel(equip_01, equip_02);
//	}
//	else {
//		armSelection = 1;
//		cout << "Try again with the correct syntax of the weapon you want to equip." << endl << endl;
//	}
//	}

	
	string selectionWep;
	bool wepSelection = 1;
	cout << "Which weapon do you want to equip? Mace or Sword? Type it in." << endl << endl;
	while (wepSelection == 1){
	
	getline(cin, selectionWep);
	if (selectionWep == "Mace"){
		inventory equip_01("Erhun", red, basic);
		inventory equip_02("Bot", plate_01, knife);
		wepSelection = 0;
		duel(equip_01, equip_02);

	}
	
	else if (selectionWep == "Sword"){
		inventory equip_01("Erhun", plate_01, knife);
		inventory equip_02("Bot", red, basic);
		wepSelection = 0;
		duel(equip_01, equip_02);
	}
	else {
		wepSelection = 1;
		cout << "Try again with the correct syntax of the weapon you want to equip." << endl << endl;
	}
	}
	
	
		
	return 0;
	
}
