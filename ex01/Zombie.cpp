#include "Zombie.hpp"

// Default constructor
Zombie::Zombie()
{
    m_name = "";
}

// Parameterized constructor
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

// Set name function
void Zombie::setName(std::string name)
{
    m_name = name;
}