#include "ScavTrap.hpp"

void	ScavTrap::_setDefaultValues()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = "Unknown";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_className = "SC4V-TP";

}

ScavTrap::ScavTrap()
{
	this->_setDefaultValues();
	std::cout << "SCAV-TP <" << this->_name << "> is ready for fight!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_setDefaultValues();
	this->_name = name;
	std::cout << "SCAV-TP <" << this->_name << "> is ready for fight!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "We just cloned " << this->_name << " ! For Alliance!!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP <" << this->_name << "> is going to hell... R.I.P." << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challenges[] = {
			"Watch \"My little pony\"!", "fight with DUCK!", "Ice break", "24h DOTA", "1M Volts"
	};
	std::cout << "SC4V-TP <" << this->_name << "> challenges " << target << " in " <<
		challenges[rand() % 5] << std::endl;
}
