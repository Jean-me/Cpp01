#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    
    // Create an array of N zombies
    Zombie *horde = new Zombie[N];
    
    // Set the name for each zombie in the horde
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    
    return horde;
}