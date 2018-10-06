#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP
# include <iostream>
# include "IAsteroid.hpp"

class AsteroKreog: public IAsteroid {
	private:
	protected:
		std::string name;
	public:
		AsteroKreog(void);

		std::string getName() const;
		std::string beMined(StripMiner *o) const;
		std::string beMined(DeepCoreMiner *o) const ;

		AsteroKreog(AsteroKreog const & src);
		AsteroKreog& operator=(AsteroKreog const & rhs);

		~AsteroKreog(void);
};

std::ostream& operator<<(std::ostream& out, AsteroKreog const &i);

#endif
