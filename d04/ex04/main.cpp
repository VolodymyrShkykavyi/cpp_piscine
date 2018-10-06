#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "KoalaSteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "AsteroKreog.hpp"
#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"


int main() {
	IAsteroid* koala = new KoalaSteroid();
	IAsteroid* astero = new AsteroKreog();
	IMiningLaser* strip = new StripMiner();
	IMiningLaser* deep = new DeepCoreMiner();
	MiningBarge* mining = new MiningBarge();

	(void)koala;
	(void)strip;
	(void)deep;
	(void)astero;
	(void)mining;
	std::cout << koala->getName() << " " << astero->getName() << std::endl;
	std::cout << "= KOALA =" << std::endl;	
	strip->mine(koala);
	deep->mine(koala);
	std::cout << "= ASTERO =" << std::endl;	
	strip->mine(astero);
	deep->mine(astero);
	mining->equip(strip);
	mining->equip(deep);
	mining->equip(strip);
	mining->equip(deep);
	mining->equip(deep);
	std::cout << "= KOALA =" << std::endl;
	mining->mine(koala);
	std::cout << "= ASTERO =" << std::endl;
	mining->mine(astero);
	return 0;
}
