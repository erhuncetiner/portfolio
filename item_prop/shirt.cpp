#include "shirt.h"

shirt::shirt(int mat, double cond, double wght, int rar){
	
	materialCode = mat;
	condition = cond;
	weight = wght;
	rarity = rar;
	value = weight * rarity;
	type = "Shirt";
	
}

