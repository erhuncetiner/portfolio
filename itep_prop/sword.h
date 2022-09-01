#include <conio.h>
#include <iostream>

#pragma once

#include "weapons.h"

class sword : public weapons
{
	public:
		sword(int mat, double cond, double dmg, double wght, int rar);
		
};

