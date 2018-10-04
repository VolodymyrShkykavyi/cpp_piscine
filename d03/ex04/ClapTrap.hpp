#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &rfs);
	~ClapTrap();

	ClapTrap 	&operator=(ClapTrap const &rfs);

	int	getHitPoints(void) const;
	int	getMaxHitPoints(void) const;
	int	getEnergyPoints(void) const;
	int	getMaxEnergyPoints(void) const;
	int	getLevel(void) const;
	std::string		getName(void) const;
	int	getMeleeAttackDamage(void) const;
	int	getRangedAttackDamage(void) const;
	int	getArmorDamageReduction(void) const;

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(int amount);
	void		beRepaired(int amount);

protected:
	std::string	_className;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;

	void 		_setDefaultValues(void);

};

#endif