
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_energyAttackDamage = 25;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "Ninja " << this->_name << " joins Starbound!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_energyAttackDamage = 25;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "Ninja " << name << " joins Starbound!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	std::cout << "We just cloned ninja " << this->_name << " !" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja " << this->_name << " dies is the most heroic way... R.I.P." << std::endl;
}

NinjaTrap		& NinjaTrap::operator=(NinjaTrap const &rhs)
{
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_energyAttackDamage = rhs.getEnergyAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	this->_energyAttackDamage = rhs.getEnergyAttackDamage();
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "Starbound: " << this->_name << " attacks " << target << " with Neo Chakram, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "Starbound: " << this->_name << " attacks " << target << " with Titanium Dagger, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &target) const
{
	std::cout << "Starbound: " << this->_name << " greets " << target.getName() << " with smile !" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &target) const
{
	std::cout << "Starbound: " << this->_name << " throws Bawling Ball at " << target.getName() << " with evil laugh !" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &target) const
{
	std::cout << "Starbound: " << this->_name << " throws Gigantic Snowball at " << target.getName() << " with evil laugh !" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &target) const
{
	std::cout << "Starbound: " << this->_name << " throws Cocunut at " << target.getName() << " with evil laugh !" << std::endl;
	return ;
}
