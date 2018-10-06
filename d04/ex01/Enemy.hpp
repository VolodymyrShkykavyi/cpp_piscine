#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {
	protected:
		Enemy(void);
		int hp;
		std::string type;
		Enemy(int hp, std::string const & type);
	public:
		std::string virtual getType() const;
		int getHP() const;
		virtual void takeDamage(int dam);
		Enemy(Enemy const & src);
		Enemy& operator=(Enemy const & rhs);
	
		virtual ~Enemy(void);
};

std::ostream& operator<<(std::ostream& out, Enemy const &i);

#endif
