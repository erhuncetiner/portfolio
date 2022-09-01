#include "apparel.h"

double c;
int d;

apparel::apparel():items(c, d){
	
	value = weight * rarity;
	
}

void apparel::details(){
	{if (materialCode == 1){ // Silk
		material = "Silk";
	}
	
	else if (materialCode == 2){ // Linen
		material = "Linen";
	}
	
	else if (materialCode == 3){ // Cotton
		material = "Cotton";
	}}
	{if (condition > 1){
		cout << "Condition error!" << endl;
	}
	
	else if (condition >= 0.8){
		wear = "Brand New";
	}
	
	else if (condition >= 0.6){
		wear = "Minimally Worn";
	}
	
	else if (condition >= 0.4){
		wear = "Regularly Used";
	}
	
	else if (condition >= 0.2){
		wear = "Overused";
	}
	
	else if (condition >= 0){
		wear = "Deprived";
	}
	
	}
	
	cout << "Your item is a " << wear << " " << material << " " << type << "." << endl;
	
}
