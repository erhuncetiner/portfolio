#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>



using namespace std;
//#ifndef CREATE_H
//#define CREATE_H
class economy {
	public:
	double globalInflation;
//	double kingdomInflation;
	double localInflation;
	
	string crisisName;
	bool crisisActive;
	
	double crisisSeverity;
	
	void refugeeCrisis();
//	void warStarted(string& crisisName, bool& crisisActive, double& localInflation, double& kingdomInflation, double& globalInflation);
//	void warEnded(string& crisisName, bool& crisisActive, double& localInflation, double& kingdomInflation, double& globalInflation);

	
};

void economy::refugeeCrisis(){
//	cout << "ref" << endl;
//	cout << "A tall " << npc_orc_01.race << " is heard running through the streets with great haste. He seems to be shouting about grim news. After listening closely, you make sense of his words. He is warning the townsfolk about the fall of the " << kingdom_02.name << ". Their capital "
//	<< kingdom_02.k_city << " is left ablaze after the forces of the " << kingdom_03.name <<  " captured it after a long and brutal siege." << " While the future of the " << kingdom_02.famousarea << "is uncertain, one thing is certain. More and more " << npc_orc_01.race << " refugees will flow into the "
//	<< kingdom_01.name << ". You think that the increasing population and hopeless workers will raise the prices. " << endl << endl;
	
	localInflation = 1;
	crisisSeverity = 1.1;
	localInflation = localInflation*crisisSeverity;
//	kingdomInflation =  localInflation;
//	globalInflation = globalInflation*1.1;
	crisisActive = true;
	crisisName = "Orcish Refugee Crisis";
	cout << endl << "EVENT #1: " << crisisName << endl << endl;
//	cout << localInflation << endl;
}

//#endif
