#include "FragTrap.hpp"

void	FragTrap::_setDefaultValues()
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
}

FragTrap::FragTrap()
{
	this->_setDefaultValues();
	std::cout << "FR4G-TP <" << this->_name << "> is ready for fight!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_setDefaultValues();
	this->_name = name;
	std::cout << "FR4G-TP <" << this->_name << "> is ready for fight!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "We just cloned " << this->_name << " ! For Alliance!!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << this->_name << "> is going to hell... R.I.P." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

unsigned int		FragTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int		FragTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}

unsigned int		FragTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int		FragTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}

unsigned int		FragTrap::getLevel(void) const
{
	return (this->_level);
}

std::string			FragTrap::getName(void) const
{
	return (this->_name);
}

unsigned int		FragTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

unsigned int		FragTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

unsigned int		FragTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target <<
		" with Bow, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks " << target <<
		" with bloody Axe, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << "FR4G-TP <" << this->_name << "> takes " << this->_hitPoints <<
			" points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << "FR4G-TP <" << this->_name << "> takes " <<
			amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "FR4G-TP <" << this->_name << "> repair and takes" <<
			this->_maxHitPoints - this->_hitPoints <<
			" points of health!" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "FR4G-TP <" << this->_name << "> repair and takes " <<
			amount << " points of health!" << std::endl;
		this->_hitPoints += amount;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	attacks[5] = {"sunstrike", "meteor", "pony", "black hole", "freezing field"};

	if (this->_energyPoints > 25) {
		std::cout << "FR4G-TP <" << this->_name << "> sends " << attacks[rand() % 5] << " to attack "
				  << target << std::endl;
		this->_energyPoints -= 25;
	} else {
		std::cout << "FR4G-TP <" << this->_name << "> doesn't have enough energy!" << std::endl;
	}
	return ;
}
