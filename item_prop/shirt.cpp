#include "shirt.h"

shirt::shirt(int mat, double cond, double armo, double wght, int rar){
	
	materialCode = mat;
	condition = cond;
	weight = wght;
	armor = armo;
	rarity = rar;
	value = weight * rarity;
	type = "Shirt";
	
}

