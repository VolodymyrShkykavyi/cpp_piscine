#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while(1) {
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		if (!getline(std::cin, command)){
            break;
		}

		if (std::cin.eof() == 1) {
		    std::cin.clear();
		    std::cin.ignore();
            continue;
		}
		if (command == "ADD")
            phonebook.add();
		if (command == "SEARCH") {
            std::string id;

            phonebook.show();
            std::cout << "Enter id to show more information: ";
            if (!getline(std::cin, id)){
                break;
            }
            if (id.size() != 1 || !std::isdigit(id[0])) {
                id = "-1";
            }
            phonebook.showContact(std::stoi(id));
        }
        if (command == "EXIT")
            return (0);
	}
    return (0);
}
