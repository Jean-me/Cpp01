#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string m_name;

public:
    // Constructor
    Zombie(std::string name);

    // Destructor
    ~Zombie();

    // Member function
    void announce(void);
};

// Function prototypes
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif