#ifndef IASTEROID_HPP
# define IASTEROID_HPP
# include <iostream>
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class StripMiner;
class DeepCoreMiner;
class IAsteroid {
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(StripMiner* o) const = 0;
		virtual std::string beMined(DeepCoreMiner* o) const = 0;
		virtual std::string getName() const = 0;
};

std::ostream& operator<<(std::ostream& out, IAsteroid const &i);

#endif
