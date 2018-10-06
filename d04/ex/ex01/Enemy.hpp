#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {
	protected:
		/* Constructors - do not delete the default constructor (void) */
		Enemy(void);
		int hp;
		std::string type;
		Enemy(int hp, std::string const & type);
	public:
		std::string virtual getType() const;
		int getHP() const;
		virtual void takeDamage(int dam);
		/* override */
		Enemy(Enemy const & src);
		Enemy& operator=(Enemy const & rhs);
	
		/* Destructors */
		virtual ~Enemy(void);
};

std::ostream& operator<<(std::ostream& out, Enemy const &i);

#endif
