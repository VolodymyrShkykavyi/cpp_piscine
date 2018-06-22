
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_hitPoints(100),
	_maxHitPoints(100),
	_level(1),
	_name("Unknown human")
{
	std::cout << this->_name << " is born by ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_hitPoints(100),
	_maxHitPoints(100),
	_level(1),
	_name(name)
{
	std::cout << name << " is born by ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "We just cloned " << this->_name << " by ClapTrap !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap buries "<< this->_name << std::endl;
}

ClapTrap		& ClapTrap::operator=(ClapTrap const &rhs)
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

unsigned int		ClapTrap::getHitPoints(void) const { return (this->_hitPoints); }
unsigned int		ClapTrap::getMaxHitPoints(void) const { return (this->_maxHitPoints); }
unsigned int		ClapTrap::getEnergyPoints(void) const { return (this->_energyPoints); }
unsigned int		ClapTrap::getMaxEnergyPoints(void) const { return (this->_maxEnergyPoints); }
unsigned int		ClapTrap::getLevel(void) const { return (this->_level); }
std::string			ClapTrap::getName(void) const { return (this->_name); }
unsigned int		ClapTrap::getMeleeAttackDamage(void) const { return (this->_meleeAttackDamage); }
unsigned int		ClapTrap::getRangedAttackDamage(void) const { return (this->_rangedAttackDamage); }
unsigned int		ClapTrap::getArmorDamageReduction(void) const { return (this->_armorDamageReduction); }
unsigned int		ClapTrap::getEnergyAttackDamage(void) const { return (this->_energyAttackDamage); }

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << "Starbound: " << this->_name << " takes " << this->_hitPoints << " points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << "Starbound: " << this->_name << " takes " << amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "Starbound: " << this->_name << " takes " << this->_maxHitPoints - this->_hitPoints << " points of repairs !" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "Starbound: " << this->_name << " takes " << amount << " points of repairs !" << std::endl;
		this->_hitPoints += amount;
	}
	return ;
}
