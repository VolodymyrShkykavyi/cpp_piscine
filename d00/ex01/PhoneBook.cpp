#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_contactsCount = -1;
}

int		PhoneBook::getContactsCount(void)
{
	return this->_contactsCount + 1;
}

bool	PhoneBook::add(void)
{
	int	id = this->getContactsCount();

	if (id >= 8) {
        std::cout << "Can't add new contact. Only 8 contacts allowed." << std::endl;
		return false;
	}
	this->_contacts[id].setContact();
	this->_contactsCount++;
	return true;
}

void	PhoneBook::showContact(int id)
{
    if (id < 0 || id > this->_contactsCount) {
        std::cout << "Wrong contact id" << std::endl;
        return;
    }
	this->_contacts[id].show();
}

void	PhoneBook::show(void)
{
	unsigned int	width = 10;

	std::cout << std::setw(width) << "index" << "|";
	std::cout << std::setw(width) << "first name" << "|";
	std::cout << std::setw(width) << "last name" << "|";
	std::cout << std::setw(width) << "nickname" << std::endl;

	for (int id = 0; id < this->getContactsCount(); id++)
	{
		std::cout << std::setw(width) << id << std::setfill(' ') << "|";

		std::string first_name = this->_contacts[id].first_name;
		if (first_name.size() > width)
			first_name = first_name.substr(0, width - 1) + ".";
		std::cout << std::setw(width) << first_name << std::setfill(' ') << "|";

		std::string last_name = this->_contacts[id].last_name;
		if (last_name.size() > width)
			last_name = last_name.substr(0, width - 1) + ".";
		std::cout << std::setw(width) << last_name << std::setfill(' ') << "|";

		std::string nickname = this->_contacts[id].nickname;
		if (nickname.size() > width)
			nickname = nickname.substr(0, width - 1) + ".";
		std::cout << std::setw(width) << nickname << std::setfill(' ') << std::endl;
	}
	std::cout << std::endl;
}
