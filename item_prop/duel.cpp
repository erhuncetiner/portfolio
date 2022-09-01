#include "duel.h"
#include "math.h"
string winner;
duel::duel(inventory attacker, inventory defender){
	attackerName = attacker.owner;
	attackerHit = attacker.wep.damage * sqrt(attacker.wep.condition);
	attackerHP = 100;
	attackerDeflect = attacker.cloth_01.armor * sqrt(attacker.cloth_01.condition)/100;
	
	defenderName = defender.owner;
	defenderHit = defender.wep.damage * sqrt(defender.wep.condition);
	defenderHP = 100;
	defenderDeflect = defender.cloth_01.armor * sqrt(defender.cloth_01.condition)/100;
	battle();
}

void duel::battle(){
	int i = 1;
	while (defenderHP > 0 && attackerHP > 0){
	
	defenderHP = defenderHP - attackerHit + defenderDeflect;
	attackerHP = attackerHP - defenderHit + attackerDeflect;
	
	i++;
	}	
	
	if (defenderHP > attackerHP){
		attackerHP = 0;
		winner = defenderName;
	}
	else if (attackerHP > defenderHP){
		defenderHP = 0;
		winner = attackerName;
	}
	
	cout << defenderName << " has " << defenderHP << " HP left." << endl;
	cout << attackerName << " has " << attackerHP << " HP left." << endl;
	cout << "The battle lasted for " << i << " rounds and " << winner << " has won." << endl;

}
