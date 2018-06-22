
#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_energyAttackDamage = 25;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_name << " joins Starbound!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeAttackDamage = 30;
	this->_energyAttackDamage = 25;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
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

FragTrap		& FragTrap::operator=(FragTrap const & rhs)
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
