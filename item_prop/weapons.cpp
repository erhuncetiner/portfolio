#include <conio.h>
#include <iostream>

#include "weapons.h"
#include "items.h"

using namespace std;
double a;
int b;

weapons::weapons():items(a, b){
//			materialCode = mat;
//			condition = cond;
//			damage = dmg;
//			weight = wei;
//			rarity = rar;
			value = weight * rarity;
			details();
}
			

void weapons::details(){
	{if (materialCode == 1){ // Iron
		material = "Iron";
	}
	
	else if (materialCode == 2){ // Steel
		material = "Steel";
	}}
	{if (condition > 1){
		cout << "Condition error!" << endl;
	}
	
	else if (condition >= 0.8){
		wear = "Factory New";
	}
	
	else if (condition >= 0.6){
		wear = "Minimal Wear";
	}
	
	else if (condition >= 0.4){
		wear = "Field Tested";
	}
	
	else if (condition >= 0.2){
		wear = "Well-Worn";
	}
	
	else if (condition >= 0){
		wear = "Battle Scarred";
	}
	
	}
	
//	cout << "Your item is a " << wear << " " << material << " " << type << "." << endl;
	
}			


void weapons::attack(){
	cout << "You have dealt " << damage << " damage." << endl;
}
