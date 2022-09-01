#include "mace.h"

mace::mace(int mat, double cond, double dmg, double wght, int rar)
{
		materialCode = mat;
		condition = cond;
		damage = dmg;
		weight = wght;
		rarity = rar;
		value = weight * rarity;
		type = "Mace";
}
