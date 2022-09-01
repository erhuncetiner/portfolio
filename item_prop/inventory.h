#include <conio.h>
#include <iostream>

#pragma once

#include "mace.h"
#include "sword.h"
#include "apparel.h"

using namespace std;

class inventory
{
	public:
		string owner;
		apparel cloth_01;
		weapons wep;
		
		inventory(string owner, apparel default_0, weapons wep);
		
		void equipped();
		void netWorth();
	
};


