#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>

class mutantstack {
	private:
	protected:
	public:
		/* Constructors - do not delete the default constructor (void) */
		mutantstack(void);
		// class ERROR: public std::exception {
		// 	public:
		// 		ERROR(void);
		// 		ERROR(ERROR const & src);
		// 		ERROR& operator=(ERROR const & rhs);
		// 		virtual ~ERROR(void) throw();
		//  };
		/* function members (or methods) */

		/* override */
		mutantstack(mutantstack const & src);
		mutantstack& operator=(mutantstack const & rhs);

		/* Destructors */
		virtual ~mutantstack(void);
};

std::ostream& operator<<(std::ostream& out, mutantstack const &i);

#endif
