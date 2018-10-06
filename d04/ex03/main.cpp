# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "IMateriaSource.hpp"
# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
//
//int main()
//{
//	// AMateria a;
//	Character c("Allan");
//	Character e("Enemy");
//	AMateria *i = new Ice();
//	AMateria *p = new Cure();
//	// Cure cu;
//
//	c.equip(i);
//	// c.use(0, e);
//	c.equip(i);
//	c.equip(p);
//	c.unequip(1);
//	std::cout << c.getName() << c.getWeaponInfos(0) << std::endl;
//	std::cout << c.getName() << c.getWeaponInfos(1) << std::endl;
//	std::cout << c.getName() << c.getWeaponInfos(2) << std::endl;
//	c.equip(i);
//	c.use(1, e);
//	c.use(1, e);
//	c.use(1, e);

//	std::cout << c.getName() << c.getWeaponInfos(1) << std::endl;
//	std::cout << c.getName() << c.getWeaponInfos(2) << std::endl;
//	std::cout << c.getName() << c.getWeaponInfos(0) << std::endl;
//	c.use(1, e);
//	c.use(1, e);
//	c.use(1, e);

//	c.use(1, e);
//	c.use(1, e);
//	c.use(1, e);
//	c.use(2, e);
//	std::cout << c.getName() << c.getWeaponInfos(1) << std::endl;
//	std::cout << c.getName() << c.getWeaponInfos(0) << std::endl;
//	std::cout << c.getName() << c.getWeaponInfos(2) << std::endl;
//	c.equip(i);
//	c.unequip(3);
//	c.unequip(0);
//	c.unequip(1);
//	std::cout << c.getName() << c.getWeaponInfos(0) << std::endl;
//	std::cout << "--------------------" << std::endl;
//	{
//		    IMateriaSource* src = new MateriaSource();
//			src->learnMateria(new Ice());
//			src->learnMateria(new Cure());
//		ICharacter* zaz = new Character("zaz");
//		AMateria* tmp;
//		tmp = src->createMateria("ice");
//		zaz->equip(tmp);
//		tmp = src->createMateria("cure");
//		zaz->equip(tmp);
//		ICharacter* bob = new Character("bob");
//		zaz->use(0, *bob);
//		zaz->use(1, *bob);
//		delete bob;
//		delete zaz;
//		delete src;
//	}
//	return 0;
//}

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* zaz = new Character("zaz");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    zaz->equip(tmp);
    tmp = src->createMateria("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");
    zaz->use(0, *bob);
    zaz->use(1, *bob);
    delete bob;
    delete zaz;
    delete src;
    return 0;
}