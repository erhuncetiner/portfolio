#include <conio.h>
#include <iostream>

#pragma once

#include "items.h"

class apparel : public items
{
	public:
		int materialCode;
		double condition; // 0 to 1
		double armor;
		string type, wear, material;
		
		apparel();
	
		void details();
};


