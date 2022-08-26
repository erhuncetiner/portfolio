#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>
#include <limits>


//#include <string>
//#include <vector>
//#include <fstream>
//#include "lodepng.h"

#include "player.h"
#include "npc.h"
#include "building.h"
#include "city.h"
#include "kingdom.h"
#include "economy.h"
//#include "economy.cpp"

using namespace std;

////class player {
////	public:
//////		int hp;
////		string name;
////		string race;
////		double gold;
////		int goods;
//////		string coord;
////		
////		void getName(string inname);
////		void getRace(string inrace);
//////		void relocate;
//////		bool alive;
////};

//	string getName(void);
	void player::getName(string inname){
		cout << "What is your name? " << endl;
//		cin >> inname;
	getline (cin, inname);
		name = inname;
	}
	
	void player::getRace(string inrace){
		cout << "What is your race? " << endl;
		getline (cin, inrace);
		race = inrace;
	}
	




//class npc {
//	public:
////		int hp;
//		string name;
//		string race;
//		double gold;
//		int amount;
////		bool enemy;
////		bool friendly;
////		bool alive;	
//		
//};

//class building {
//	public:
//		double gold;
////		bool empty;
//		string name;
//		int goods;
//		npc owner;
////		npc customer;
//		
//};

//class city {
//	public:
//		string cityname;
////		building tavern;
//		building shop;
//		double gold;
//		int population;	
//			
//};

void startingLoc(player& self, npc& npc_01, city& currentCity, building& notable, kingdom& kingdom_01){
	

	
	
	cout << "Welcome to Erhunia fellow traveller! First, you must choose a starting location." << endl << endl;
	cout << "You may start in Erhunia or in Erhunic. Choose wisely." << " When you decide, you must type in the name of the city below and tap ENTER."
	<< endl;
	
	kingdom_01.famousarea = "Erhu Plateau";
	kingdom_01.famoussea = "Sea of Promes";
	kingdom_01.power = 100;
	kingdom_01.name = "Erhunian Kingdom";
	
	
	
	cin >> currentCity.cityname;
	

	if (currentCity.cityname == "Erhunic"){
//		currentCity.buyprice = 25;
//		currentCity.sellprice = 15;
		currentCity.code = 2;
		kingdom_01.code = 1;
		self.gold = 20;
		self.goods = 60;
		npc_01.amount = 150;
		npc_01.gold = 30;
		npc_01.race = "Snow Elf";
		npc_01.name = "Heiten Kren";
//		cout << npc_01.race << endl;
//		currentCity.gold = 5000;
//		currentCity.population = 6000;
		currentCity.shop.owner.name = npc_01.name;
		
		currentCity.shop.name = "Snowy Pasture";
		notable.name = currentCity.shop.name;	
			
//		cout << npc_01.gold << endl;
	}
	
	else if (currentCity.cityname == "Erhunia"){
//		currentCity.buyprice = 40;
//		currentCity.sellprice = 25;
		currentCity.code = 1;
		kingdom_01.code = 1;
		self.gold = 50;
		self.goods = 20;
		npc_01.amount = 100;
		npc_01.gold = 450;
		npc_01.race = "High Elf";
		npc_01.name = "Kramer Lanes";
//		currentCity.gold = 10000;
//		currentCity.population = 20000;
		currentCity.shop.owner.name = npc_01.name;
		
		currentCity.shop.name = "Capital Goods";
		notable.name = currentCity.shop.name;	
	}
	
	cout << endl << "Your name is " << self.name << "." << endl << "Your race is " << self.race << "." << endl << "You have " << self.gold << " gold." << endl << "You carry " << self.goods << " goods with you." << endl << endl;
	
	if (currentCity.code == 1){
	
	cout << "It was almost a week by now that you had hopped on this ship to the "<< kingdom_01.name << "'s renowned capital, " << currentCity.cityname << ". At dusk, you start hearing the screams of the seagulls that herald the end of your journey. "
	<< "After a few hours spent in the " << kingdom_01.famoussea << ", the coastal walls and the huge harbor of " << currentCity.cityname << " become apparent. Your ship slowly makes its way into the harbor. You are finally here. Welcome to " << currentCity.cityname << ". You decide to take a stroll in the city after disembarking. " << endl << endl;
	
//	cout << "Press Enter to Continue" << endl;
//	cin.ignore();
	
//	cout << "Press Enter to Continue" << endl << endl;
////	cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
//	cin;
//	cin.get(); 	
	}
	
	else if (currentCity.code == 2){
	
	cout << "You had joined a trade caravan to the productive city of " << currentCity.cityname << ", the second largest city in the " << kingdom_01.name << ". The city is founded on the snowy mountains that oversee the "
	<< kingdom_01.famousarea << " by the " << npc_01.race << " in the ancient times as a frontier town. However by now, the city has become a production powerhouse in the midst of the" << kingdom_01.name << ". After finally entering the city with the caravan, you decide to take a stroll. "
	<< endl << endl;
	
//	cout << "Press Enter to Continue" << endl;
//	cin.ignore();
	
	
//	cout << "Press Enter to Continue" << endl << endl;
////	cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
////	cin;
////	cin.get(); 
//char temp = 'x';
//while (temp != '\n'){
//
// cin.get(temp);	
//}

	}
	
}

void entershop(player& self, building& shop, npc& person, city& town){
	
//	self.gold = self.gold - 10;
//	self.goods = self.goods + 1;
//	
//	person.gold = person.gold + 10;
//	person.amount = person.amount - 1;
	
	
	cout << "After a short walk, you push the door of an old looking building and enter inside. "
	<< "You are now at " << shop.name << ". The shopkeeper greets you. This old looking man introduces himself as "
	<< person.name << ". By his clothing and stereotypical looks, you note that this man is an obvious " << person.race
	<< ". In a calm and well-toned voice, he says: Welcome to " << town.cityname << ", fellow " << self.race << "." << endl << endl;
	
	
//	cout <<	person.gold;
//	cout << person.race << endl;
	
//	cout << "The shopowner now has " << person.gold << " gold." << endl;
//	cout << "You have " << self.gold << " gold left." << endl;
	shop.first = 3;
	
}

void sellgoods(player& self, building& shop, npc& person, city& town, economy& econ){
	if (shop.first == 3) {
	if (town.cityname == "Erhunic"){
		town.buyprice = 25;
		town.sellprice = 15;
	}
	else if (town.cityname == "Erhunia"){
		town.buyprice = 40;
		town.sellprice = 25;
	}
	
}
	else if (shop.first == 4) {
	
	cout << "After some time you enter the " << shop.name << " again. " << person.name << " greets you. ";
	
	}
	
	int amount;
	cout << person.name << " seems to be quite well-off. You gest him that you are going to sell some of the goods you are carrying. He asks: " << endl;
	cout << "How many goods you want to sell? " << " The current price in " << town.cityname << " is " << town.sellprice << " per good you sell. " << endl << endl;
	cin >> amount;
	
	while (amount > self.goods) {
		cout << "You don't have that many goods. Please try again. " << endl << endl;
		cin >> amount;
	}
	
	self.gold = self.gold + town.sellprice*amount;
	person.gold = person.gold - town.sellprice*amount;
	
	self.goods = self.goods - amount;
	person.amount = person.amount - amount;
	
	
	cout << "You now have " << self.gold << " gold." << endl;
	
//	shop.notfirst = 1;
	shop.first = 4;

}

void welcome(player& self, city& town, economy& econ){
	
	cout << "Welcome to Erhunia! Erhunia is a medieval feudal kingdom. It offers oppurtunities and challenges for the bold. The Erhunian Kingdom's capital is the maritime trade center that is known as "
	<< "Erhunia. " << "The second largest city " << "Erhunic " << "is found high up in the snowy mountains. " << "Erhunia is expectedly large and wealthy, however they lack in goods while Erhunic is richer in resources and goods. "
	<< "A smart adventurer could exploit this situation to their advantage. " << endl << endl;
	
econ.localInflation = 1.0;
	
}
//void refill

//void travel (player& self, city& town1, city& town2, kingdom& kingdom){
//	
//	
//	
//}

//void talk

void priceUpdate_refugees(economy& econ, city& town, npc& npc_orc_01, kingdom kingdom_02, kingdom& kingdom_01, kingdom kingdom_03, building& shop){
	
	
	npc_orc_01.race = "Orc";
	npc_orc_01.name = "Heqar Qeman";
	
	kingdom_02.code = 2;
	kingdom_02.k_city.cityname = "Orkon";
	kingdom_02.famousarea = "Glameris";
	kingdom_02.power = 0;
	kingdom_02.war = false;
	kingdom_02.name = "Western Orc Federation";
	
	kingdom_03.code = 3;
	kingdom_03.famousarea = "Eastern Oxar";
	kingdom_03.k_city.cityname = "Oxar";
	kingdom_03.name = "Eastern Orcish Kingdom";
	kingdom_03.rulername = "Nemux";
	kingdom_03.war = false;
	kingdom_03.power = 80;
	kingdom_03.famoussea = "Long Sea";
	
	cout << "A short " << npc_orc_01.race << " is heard running through the streets with great haste. He seems to be shouting about grim news. After listening closely, you make sense of his words. He is warning the townsfolk about the fall of the " << kingdom_02.name << ". Their capital "
	<< kingdom_02.k_city.cityname << " is left ablaze after the forces of the " << kingdom_03.name <<  " captured it after a long and brutal siege." << " While the future of the " << kingdom_02.famousarea << " is uncertain, one thing is for certain. More and more " << npc_orc_01.race << " refugees will flow into the "
	<< kingdom_01.name << ". You think that the increasing refugee population and hopeless workers will raise the prices. " << endl << endl;
	
	econ.crisisActive = false;
	town.buyprice = town.buyprice*econ.localInflation;
	town.sellprice = town.sellprice*econ.localInflation;
	
//	shop.notfirst = 1;
}




string entry_name, entry_race;


string a;
bool b;
double c,d,e;
//double start_gold;
//int start_goods;


int main(){
	
//	typedef unsigned int uint;
//int* read_png(const string path, uint& width, uint& height) {
//    vector<uchar> img;
//    lodepng::decode(img, width, height, path, LCT_RGB);
//    int* data = new int[width*height];
//    for(uint i=0; i<width*height; i++) {
//        data[i] = img[3*i]<<16|img[3*i+1]<<8|img[3*i+2];
//    }
//    return data;
//}
//void write_png(const string path, const uint width, const uint height, const int* const data) {
//    uchar* img = new uchar[3*width*height];
//    for(uint i=0; i<width*height; i++) {
//        const int color = data[i];
//        img[3*i  ] = (color>>16)&255;
//        img[3*i+1] = (color>> 8)&255;
//        img[3*i+2] =  color     &255;
//    }
//    lodepng::encode(path, img, width, height, LCT_RGB);
//    delete[] img;
//}

	player new_player;
	npc npc_01, npc_02;
	city city_01;
	building shop_01;
	kingdom kingdom_01;
	kingdom kingdom_02;
	kingdom kingdom_03;
	economy econ_01;
	
//	city_01.buyprice = 25;
//	city_01.sellprice = 15;
	
//	econ_01.refugeeCrisis()
	
	welcome(new_player, city_01, econ_01);
	
	new_player.getName(entry_name);
	new_player.getRace(entry_race);
	
	
	
	startingLoc(new_player, npc_01, city_01, shop_01, kingdom_01);
//	cout << npc_01.gold << endl;
	entershop(new_player, shop_01, npc_01, city_01);
//	cout << npc_01.gold << endl;
	sellgoods(new_player, shop_01, npc_01, city_01, econ_01);
	
//	refugeeCrisis();
	econ_01.refugeeCrisis();
//	cout << econ_01.localInflation << endl;
	priceUpdate_refugees(econ_01, city_01, npc_02, kingdom_02, kingdom_01, kingdom_03, shop_01);
	
	sellgoods(new_player, shop_01, npc_01, city_01, econ_01);

	
	return 0;
}
