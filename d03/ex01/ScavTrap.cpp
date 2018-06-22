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

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();
	return (*this);
}

unsigned int		ScavTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int		ScavTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}

unsigned int		ScavTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int		ScavTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}

unsigned int		ScavTrap::getLevel(void) const
{
	return (this->_level);
}

std::string			ScavTrap::getName(void) const
{
	return (this->_name);
}

unsigned int		ScavTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

unsigned int		ScavTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

unsigned int		ScavTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SCAV-TP <" << this->_name << "> attacks " << target <<
			  " with Bow, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SCAV-TP <" << this->_name << "> attacks " << target <<
			  " with bloody Axe, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << "SCAV-TP <" << this->_name << "> takes " << this->_hitPoints <<
				  " points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << "SCAV-TP <" << this->_name << "> takes " <<
				  amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "SCAV-TP <" << this->_name << "> repair and takes" <<
				  this->_maxHitPoints - this->_hitPoints <<
				  " points of health!" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "SCAV-TP <" << this->_name << "> repair and takes " <<
				  amount << " points of health!" << std::endl;
		this->_hitPoints += amount;
	}
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challenges[] = {
			"Watch \"My little pony\"!", "fight with DUCK!", "Ice break", "24h DOTA", "1M Volts"
	};
	std::cout << "SC4V-TP <" << this->_name << "> challenges " << target << " in " <<
		challenges[rand() % 5] << std::endl;
}
