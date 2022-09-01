#pragma once

#include "inventory.h"

class duel
{
	public:
		string attackerName;
		double attackerHit;
		double attackerHP;
		double attackerDeflect;
		
		string defenderName;
		double defenderHit;
		double defenderHP;
		double defenderDeflect;
		
		duel(inventory attacker, inventory defender);
		void battle();
};

