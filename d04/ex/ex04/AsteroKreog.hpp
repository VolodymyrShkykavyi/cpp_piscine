#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP
# include <iostream>
# include "IAsteroid.hpp"

class AsteroKreog: public IAsteroid {
	private:
	protected:
		std::string name;
	public:
		/* Constructors - do not delete the default constructor (void) */
		AsteroKreog(void);

		/* function members (or methods) */
		std::string getName() const;
		std::string beMined(StripMiner *o) const;
		std::string beMined(DeepCoreMiner *o) const ;
		// std::string beMined(const *) const;
		/* override */
		AsteroKreog(AsteroKreog const & src);
		AsteroKreog& operator=(AsteroKreog const & rhs);

		/* Destructors */
		~AsteroKreog(void);
};

std::ostream& operator<<(std::ostream& out, AsteroKreog const &i);

#endif
