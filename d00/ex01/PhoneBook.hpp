#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
#include <iomanip>

class PhoneBook
{
public:
	PhoneBook(void);
	
	bool	add(void);
	void	show(void);
	Contact	getContact(int id);
	int		getContactsCount(void);
private:
	Contact	_contacts[8];
	int		_contactsCount;
};

#endif
