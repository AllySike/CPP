#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
    int index;
    static std::string fields[5];
    std::string info[5];
public:
    void set_info(int cnt);
    void display_info();
    void display();
};


#endif
