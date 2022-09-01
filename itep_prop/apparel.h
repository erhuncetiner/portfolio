#ifndef APPAREL_H
#define APPAREL_H

#include "items.h"

class apparel : public items
{
	public:
		int materialCode;
		double condition; // 0 to 1
		string type, wear, material;
		
		apparel();
	
		void details();
};

#endif
