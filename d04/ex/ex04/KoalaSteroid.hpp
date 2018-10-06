#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP
# include <iostream>
# include "IAsteroid.hpp"
class IAsteroid;

class KoalaSteroid: public IAsteroid {
	private:
	protected:
		std::string name;

	public:
		/* Constructors - do not delete the default constructor (void) */
		KoalaSteroid(void);

		/* function members (or methods) */
		std::string getName() const;
		std::string beMined(StripMiner *o) const;
		std::string beMined(DeepCoreMiner *o) const ;
		/* override */
		KoalaSteroid(KoalaSteroid const & src);
		KoalaSteroid& operator=(KoalaSteroid const & rhs);

		/* Destructors */
		~KoalaSteroid(void);
};

std::ostream& operator<<(std::ostream& out, KoalaSteroid const &i);

#endif
