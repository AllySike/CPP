#include "Contact.hpp"

std::string Contact::fields[5] = {
        "First Name",
        "Last Name",
        "Nickname",
        "Phone number",
        "Darkest Secret"
};

void Contact::set_info(int cnt)
{
    int i = 0;
    this->index = cnt;
    while (i < 5)
    {
        std::cout << this->fields[i] << ':' << std::endl;
        std::getline(std::cin, this->info[i++]);
    }
    std::cout << "Contact added!" << std::endl;
}

void Contact::display_info()
{
    int i;

    i = 0;
    std::cout << '|' << std::setw(10) << this->index;
    while (i < 3)
    {
        std::cout << "|";
        if (this->info[i].length() > 10)
            std::cout << this->info[i].substr(0, 9) << '.';
        else
            std::cout << std::setw(10) << this->info[i];
        i++;
    }
    std::cout << '|' << std::endl;
}

void Contact::display()
{
    int i;

    i = 0;
    while (i < 5)
    {
        std::cout << this->fields[i] << ": " << this->info[i] << std::endl;
        i++;
    }
}
