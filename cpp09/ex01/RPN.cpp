#include "RPN.hpp"


void clearAll(std::stack<int>& stck){
    for(;stck.size() > 0;)
        stck.pop();
}

void polishCalc(std::stack<int>& stck, char symbol)
{
    int nbr = 0;
    if(stck.size() < 2)
    {
        std::cerr << "Error\n";
        exit(EXIT_FAILURE);
    }
    switch (symbol)
    {
    case '+':
        nbr = stck.top();
        stck.pop();
        nbr = stck.top() + nbr;
        stck.pop();
        stck.push(nbr);
        break;
    case '-':
        nbr = stck.top();
        stck.pop();
        nbr = stck.top() - nbr;
        stck.pop();
        stck.push(nbr);
        break;
    case '*':
        nbr = stck.top();
        stck.pop();
        nbr = stck.top() * nbr;
        stck.pop();
        stck.push(nbr);
        break;
    case '/':
        try{
        nbr = stck.top();
        stck.pop();
        nbr = stck.top() / nbr;
        stck.pop();
        stck.push(nbr);
        }catch(std::exception& ep){
            std::cerr << ep.what() << std::endl;
            clearAll(stck);
            exit(EXIT_FAILURE);
        }
        break;
    }
}


void digitOrOp(std::stack<int>& stck, std::string input)
{
    std::string symbols = "+-/*";
    for (size_t i = 0; i < input.length(); i++)
    {
        if(std::isspace(input[i]))
            continue;
        else if(std::isdigit(input[i]))
            stck.push(input[i] - '0');
        else if(symbols.find(input[i]) != std::string::npos)
            polishCalc(stck, input[i]);
        else{
            std::cerr << "Error" << std::endl;
            clearAll(stck);
            exit(EXIT_FAILURE);
        }
    }
}
