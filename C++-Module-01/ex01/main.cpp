#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *z1 = zombieHorde(N,"tester");
    for(int i = 0; i < N ; i++)
    {
        z1[i].announce();
    }
    delete[] z1;
}