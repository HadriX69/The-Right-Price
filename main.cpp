#include <iostream>
#include <random>

int main() {
    std::cout << "The Right Price -- V1.0" << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);
    int price = dis(gen);
    int attempt = 0;
    while (true)
    {

        int Input;
        std::cout << "Trouve le juste prix : " << std::endl;
        std::cin >> Input;
        if (Input == price)
        {
            attempt++;
            std::cout << "Bravo tu as trouve le juste prix !"<< std::endl;
            std::cout <<"Nombre d'essaie : "<< attempt << std::endl;
             break;
        }
        else if (Input > price)
        {
            std::cout << "Moins" << std::endl;
            attempt++;
        }
        else if (Input < price)
        {
            std::cout << "Plus" << std::endl;
            attempt++;
        }

    }
    //return 0;
}
