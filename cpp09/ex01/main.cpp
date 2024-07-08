#include "RPN.hpp"

int main(int ac, char **av)
{
    std::stack<int>stck;
    if(ac != 2)
    {
        std::cerr << "Argument Error\n";
        return EXIT_FAILURE;
    }
    digitOrOp(stck, av[1]);
    if(stck.size() == 1)
        std::cout << stck.top() << std::endl;
    else
        std::cerr << "Error\n";
    clearAll(stck);
    return EXIT_SUCCESS;
}