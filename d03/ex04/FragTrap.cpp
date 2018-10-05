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
	this->_className = "FR4G-TP";
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

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
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

void FragTrap::rangedAttack(std::string const &target) const {
    std::cout << this->_className << " <" << this->_name << "> attacks " << target <<
              " with Bow (from FragTrap), causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;

}
