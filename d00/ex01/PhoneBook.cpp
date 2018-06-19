#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_contactsCount = 0;
}

int		PhoneBook::getContactsCount(void)
{
	return this->_contactsCount;
}

bool	PhoneBook::add(void)
{
	int	id = this->getContactsCount();

	if (id >= 8) {
		return false;
	}
	this->_contacts[id].setContact();
	this->_contactsCount++;
	return true;
}

Contact	PhoneBook::getContact(int id)
{
	return this->_contacts[id];
}

void	PhoneBook::show(void)
{
	int	width = 10;

	std::cout << std::setw(width) << "index" << "|";
	std::cout << std::setw(width) << "first name" << "|";
	std::cout << std::setw(width) << "last name" << "|";
	std::cout << std::setw(width) << "nickname" << std::endl;

	for (int id = 0; id < this->_contacts_count; id++)
	{
		std::cout << std::setw(10) << id << std::setfill(' ') << "|";

		std::string first_name = this->_contacts[id].first_name;
		if (first_name.size() > 10)
			first_name = first_name.substr(0, 9) + ".";
		std::cout << std::setw(10) << first_name << std::setfill(' ') << "|";

		std::string last_name = this->_contacts[id].last_name;
		if (last_name.size() > 10)
			last_name = last_name.substr(0, 9) + ".";
		std::cout << std::setw(10) << last_name << std::setfill(' ') << "|";

		std::string nickname = this->_contacts[id].nickname;
		if (nickname.size() > 10)
			nickname = nickname.substr(0, 9) + ".";
		std::cout << std::setw(10) << nickname << std::setfill(' ') << std::endl;
	}
	std::cout << std::endl;
}
