#include <iostream>
#include <cstdlib>

using namespace std;

class character{
	public:
	string name;
	int hp;
	int attack;
	int agility;
	int defense;
};

void eat(character x, int a, int b){
	b = a + 10;
	cout << b << endl;
}
	int x = 1;
	character player;
	character new_player;
	
int main(){
	
	player.hp = 100;
	cout << player.hp << endl;
	eat(player,player.hp,new_player.hp);
	cout << new_player.hp << endl;

}
