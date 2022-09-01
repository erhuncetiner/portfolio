#include <conio.h>
#include <iostream>

#pragma once
#include "items.h"

using namespace std;

class weapons : public items
{
	public:
		int materialCode;
		double condition; // 0 to 1
		double damage;
		string type, wear, material;
						
		weapons();
		
		void attack();
		void details();
	
};

