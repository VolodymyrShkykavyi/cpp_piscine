
#include "FragTrap.hpp"

FragTrap::FragTrap(void):
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name("Unknown human"),
	_meleeAttackDamage(30),
	_energyAttackDamage(25),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << this->_name << " joins Starbound!" << std::endl;
}

FragTrap::FragTrap(std::string name):
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name(name),
	_meleeAttackDamage(30),
	_energyAttackDamage(25),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << name << " joins Starbound!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "We just cloned " << this->_name << " !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " dies is the most heroic way... R.I.P." << std::endl;
}

FragTrap		& FragTrap::operator=(FragTrap const &rhs)
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
	this->_energyAttackDamage = rhs.getEnergyAttackDamage();
	return (*this);
}

unsigned int		FragTrap::getHitPoints(void) const { return (this->_hitPoints); }
unsigned int		FragTrap::getMaxHitPoints(void) const { return (this->_maxHitPoints); }
unsigned int		FragTrap::getEnergyPoints(void) const { return (this->_energyPoints); }
unsigned int		FragTrap::getMaxEnergyPoints(void) const { return (this->_maxEnergyPoints); }
unsigned int		FragTrap::getLevel(void) const { return (this->_level); }
std::string			FragTrap::getName(void) const { return (this->_name); }
unsigned int		FragTrap::getMeleeAttackDamage(void) const { return (this->_meleeAttackDamage); }
unsigned int		FragTrap::getRangedAttackDamage(void) const { return (this->_rangedAttackDamage); }
unsigned int		FragTrap::getArmorDamageReduction(void) const { return (this->_armorDamageReduction); }
unsigned int		FragTrap::getEnergyAttackDamage(void) const { return (this->_energyAttackDamage); }

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "Starbound: " << this->_name << " attacks " << target << " with Titanium Hunting Bow, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "Starbound: " << this->_name << " attacks " << target << " with Red Starcleaversword, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount) {
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

void	FragTrap::sunblaster(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " uses Sunblaster on " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	std::cout << "           Behold! The power of the sun, in a gun!" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::wildPulsar(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " uses Wild Pulsar on " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	std::cout << "           Finally, the power of pure energy in your hands!" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::bubblegun(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " uses Bubblegun on " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	std::cout << "           A bubble gun! It shoots bubbles! Weeeee!" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::flowerBouquet(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " uses Flower Bouquet on " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	std::cout << "           A bouquet of flowers. Hit them with your love!" << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::theDrumstick(std::string const &target)
{
	std::cout << "Starbound: " << this->_name << " uses The Drumstick on " << target << " for " << this->_energyAttackDamage << " energy points !" << std::endl;
	std::cout << "           The Drumstick. A hammer styled after a chicken's leg. With spikes." << std::endl;
	this->_energyPoints -= this->_energyAttackDamage;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		index;
	void	(FragTrap::*attacks[5])(std::string const &target);

	attacks[0] = &FragTrap::sunblaster;
	attacks[1] = &FragTrap::wildPulsar;
	attacks[2] = &FragTrap::bubblegun;
	attacks[3] = &FragTrap::flowerBouquet;
	attacks[4] = &FragTrap::theDrumstick;

	index = rand() % 5;
	if (25 < this->_energyPoints)
		(this->*attacks[index])(target);
	else
		std::cout << "Starbound: " << this->_name << " doesn't have enough energy !" << std::endl;
	return ;
}
