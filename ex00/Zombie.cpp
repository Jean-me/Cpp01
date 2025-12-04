#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
    m_name = name;
}

// Destructor
Zombie::~Zombie()
{
    std::cout << m_name << " is destroyed." << std::endl;
}

// Member function
void Zombie::announce(void)
{
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}