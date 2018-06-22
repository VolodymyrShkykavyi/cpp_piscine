
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_energyAttackDamage = 10;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_name << " joins Starbound to challenge everybody!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeAttackDamage = 20;
	this->_energyAttackDamage = 10;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << name << " joins Starbound to challenge everybody!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "We just cloned " << this->_name << " for more challenges !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " dies is the most heroic way, nobody will do his challenges ever again... R.I.P." << std::endl;
}

ScavTrap		& ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "Starbound: " << this->_name << " attacks " << target << " with The Legendary Grenade Launcher, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "Starbound: " << this->_name << " attacks " << target << " with Rainbow Sword, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::foodfight(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " challenges " << target << " to Food Fight for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::hugFloran(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " challenges " << target << " to hug Floran for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::playMusic(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " challenges " << target << " to play drums for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::danceWithApex(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " challenges " << target << " to dance with Apex for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::playStarbound(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " challenges " << target << " to play Starbound for " << this->_energyAttackDamage << " energy points !" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int		index;
	void	(ScavTrap::*challenges[5])(std::string const &target);

	challenges[0] = &ScavTrap::foodfight;
	challenges[1] = &ScavTrap::hugFloran;
	challenges[2] = &ScavTrap::playMusic;
	challenges[3] = &ScavTrap::danceWithApex;
	challenges[4] = &ScavTrap::playStarbound;

	index = rand() % 5;
	if (25 <= this->_energyPoints)
		(this->*challenges[index])(target);
	else
		std::cout << "Starbound: " << this->_name << " doesn't have enough energy !" << std::endl;
	return ;
}
