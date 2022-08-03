#include "zombie.Class.hpp"

int main()
{
    int i = -1;
    Zombie *Horde = zombieHorde(10, "Jason");

    while (++i < 10)
    {
        std::cout << "Zombie nbr " << i << " ";
        Horde[i].announce();
    }
    delete [] Horde;
}