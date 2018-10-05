#include "SuperTrap.hpp"

void SuperTrap::_setDefaultValues() {
    int energyPoints = _energyPoints;
    int	maxEnergyPoints = _maxEnergyPoints;
    int	meleeAttackDamage = _meleeAttackDamage;

    FragTrap::_setDefaultValues();
    this->_energyPoints = energyPoints;
    this->_maxEnergyPoints = maxEnergyPoints;
    this->_meleeAttackDamage = meleeAttackDamage;

    this->_level = 1;
    this->_name = "master";
    this->_className = "SUPER-TP";
}

SuperTrap::SuperTrap():ClapTrap(), FragTrap(), NinjaTrap() {
    this->_setDefaultValues();
    this->_hitPoints = FragTrap::_hitPoints;
    std::cout << this->_className << " <" << this->_name << "> is ready for fight!" << std::endl;

}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    this->_setDefaultValues();
    this->_name = name;
    std::cout << this->_className << " <" << this->_name << "> is ready for fight!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) {
    *this = src;
    std::cout << "We just suuuuper cloned " << this->_name << " ! MEEGAAA TRAP!!!" << std::endl;

}

SuperTrap& SuperTrap::operator=(SuperTrap const &rhs) {
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

SuperTrap::~SuperTrap() {
    std::cout << this->_className << " <" << this->_name << "> is going to darkness... R.I.P." << std::endl;

}

void SuperTrap::rangedAttack(std::string const &target) const {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
    NinjaTrap::meleeAttack(target);
}