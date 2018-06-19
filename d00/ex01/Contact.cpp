#include "Contact.hpp"

Contact::Contact(void)
{}

void	Contact::setContact(void)
{
	std::cout << "First name:" << std::endl;
	getline(std::cin, this->first_name);
	std::cout << "Last name:" << std::endl;
	getline(std::cin, this->last_name);
	std::cout << "Nickname:" << std::endl;
	getline(std::cin, this->nickname);
	std::cout << "Login:" << std::endl;
	getline(std::cin, this->login);
	std::cout << "Postal address:" << std::endl;
	getline(std::cin, this->postal_address);
	std::cout << "Phone number:" << std::endl;
	getline(std::cin, this->phone_number);
	std::cout << "Birthday date:" << std::endl;
	getline(std::cin, this->birthday_date);
	std::cout << "Favorite meal:" << std::endl;
	getline(std::cin, this->favorite_meal);
	std::cout << "Underwear color" << std::endl;
	getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret" << std::endl;
	getline(std::cin, this->darkest_secret);
}
