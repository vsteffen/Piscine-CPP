#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main(void)
{
	Character* zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);

	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);

	zaz->attack(c);
	zaz->attack(c);
	zaz->attack(c);
	zaz->attack(c);
	zaz->attack(c);

	zaz->recoverAP();
	zaz->attack(c);

	std::cout << *zaz;

	return 0;
}
