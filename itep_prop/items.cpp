#include <conio.h>
#include <iostream>


#include "items.h"
using namespace std;

items::items(double a, int b){
	weight = a;
	rarity = b;
	value = weight * rarity;
	
}

void items::showInfo(){


//void items::getValue(){
	
	cout << "This item is worth " << value << " golds." << endl;
	
//}

//void items::getWeight(){
	
	cout << "This item weighs " << weight << ". " << endl;
	
//}

//void items::seeRarity(){

	if (rarity == 5){
		cout << "This item is one-of-a-kind. " << endl;
	}
	
	else if (rarity == 4){
		cout << "This item is extremely rare. " << endl;
	}
	
	else if (rarity == 3){
		cout << "This item is rare. " << endl;
	}
	
	else if (rarity == 2){
		cout << "This item is common. " << endl;
	}
	
	else if (rarity == 1){
		cout << "This item is extremely common. " << endl;
	}
		
//}

}
