#include "NinjaTrap.hpp"

void	NinjaTrap::_setDefaultValues()
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "Unknown";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_className = "NINJA-TP";
}

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->_setDefaultValues();
	std::cout << this->_className << " <" << this->_name << "> is ready for fight!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_setDefaultValues();
	this->_name = name;
	std::cout << this->_className << " <" << this->_name << "> is ready for fight!" << std::endl;
}


NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja " << this->_name << " R.I.P." << std::endl;
}


void	NinjaTrap::ninjaShoebox(NinjaTrap const &target) const
{
	std::cout << this->_className << " <" << this->_name << "> greets " << target.getName() << " =)" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &target) const
{
	std::cout << this->_className << " <" << this->_name << "> throws shoes in " << target.getName() << "!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &target) const
{
	std::cout << this->_className << " <" << this->_name << "> call flash in " << target.getName() << " with evil laugh!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &target) const
{
	std::cout << this->_className << " <" << this->_name << "> throws Cocunut in " << target.getName() << " and laugh!" << std::endl;
	return ;
}
