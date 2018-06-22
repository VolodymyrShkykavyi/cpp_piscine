#include "ClapTrap.hpp"


void	ClapTrap::_setDefaultValues()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = "Unknown";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_className = "CL4P-TP";
}

ClapTrap::ClapTrap()
{
	this->_setDefaultValues();
	std::cout << this->_name << " is made by ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_setDefaultValues();
	std::cout << name << " is made by ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << this->_name << "cloned by ClapTrap!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap R.I.P "<< this->_name << std::endl;
}

ClapTrap		&ClapTrap::operator=(ClapTrap const &rfs)
{
	this->_hitPoints = rfs.getHitPoints();
	this->_maxHitPoints = rfs.getMaxHitPoints();
	this->_energyPoints = rfs.getEnergyPoints();
	this->_maxEnergyPoints = rfs.getMaxEnergyPoints();
	this->_level = rfs.getLevel();
	this->_name = rfs.getName();
	this->_meleeAttackDamage = rfs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rfs.getRangedAttackDamage();
	this->_armorDamageReduction = rfs.getArmorDamageReduction();
	return (*this);
}


int		ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int		ClapTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int		ClapTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}

int		ClapTrap::getLevel(void) const
{
	return (this->_level);
}

std::string			ClapTrap::getName(void) const
{
	return (this->_name);
}

int		ClapTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

int		ClapTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

int		ClapTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << this->_className << " <" << this->_name << "> attacks " << target <<
			  " with Bow, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << this->_className << " <" << this->_name << "> attacks " << target <<
			  " with bloody Axe, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(int amount)
{
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << this->_className << " <" << this->_name << "> takes " << this->_hitPoints <<
				  " points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << this->_className << " <" << this->_name << "> takes " <<
				  amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
}

void	ClapTrap::beRepaired(int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << this->_className << " <" << this->_name << "> repair and takes" <<
				  this->_maxHitPoints - this->_hitPoints <<
				  " points of health!" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << this->_className << " <" << this->_name << "> repair and takes " <<
				  amount << " points of health!" << std::endl;
		this->_hitPoints += amount;
	}
}

