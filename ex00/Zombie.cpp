#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) : name(name)
{
}

// Destructor
Zombie::~Zombie()
{
    std::cout << name << " is destroyed." << std::endl;
}

// Member function
void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}