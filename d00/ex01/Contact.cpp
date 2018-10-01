#include "Contact.hpp"

Contact::Contact(void)
{}

void	Contact::setContact(void)
{
	std::cout << "First name:" << std::endl;
	if (!getline(std::cin, this->first_name))
		exit(0);
	std::cout << "Last name:" << std::endl;
	if (!getline(std::cin, this->last_name))
		exit(0);
	std::cout << "Nickname:" << std::endl;
	if (!getline(std::cin, this->nickname))
		exit(0);
	std::cout << "Login:" << std::endl;
	if (!getline(std::cin, this->login))
		exit(0);
	std::cout << "Postal address:" << std::endl;
	if (!getline(std::cin, this->postal_address))
		exit(0);
	std::cout << "Email address:" << std::endl;
	if (!getline(std::cin, this->email_address))
		exit(0);
	std::cout << "Phone number:" << std::endl;
	if (!getline(std::cin, this->phone_number))
		exit(0);
	std::cout << "Birthday date:" << std::endl;
	if (!getline(std::cin, this->birthday_date))
		exit(0);
	std::cout << "Favorite meal:" << std::endl;
	if (!getline(std::cin, this->favorite_meal))
		exit(0);
	std::cout << "Underwear color:" << std::endl;
	if (!getline(std::cin, this->underwear_color))
		exit(0);
	std::cout << "Darkest secret:" << std::endl;
	if (!getline(std::cin, this->darkest_secret))
		exit(0);
}

void	Contact::show(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal_address << std::endl;
	std::cout << "Email address: " << this->email_address << std::endl;
	std::cout << "Phone number: " << this-> phone_number << std::endl;
	std::cout << "Birthday date: " << this->birthday_date << std::endl;
	std::cout << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}