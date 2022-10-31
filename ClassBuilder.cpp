#ifndef CLASSBUILDER_CPP
#define CLASSBUILDER_CPP

#include "ClassBuilder.h"

std::vector<std::string> ClassBuilder::tokenize(std::string line)
{
    std::stringstream input(line);
    std::vector<std::string> tokens;

    std::string currToken;

    while (getline(input, currToken, ' '))
    {
        tokens.push_back(currToken);
    }
}

void ClassBuilder::evaluateLine(std::string line)
{
    // split into tokens
    std::vector<std::string> tokens = tokenize(line);

    try
    {
        if (tokens.at(0) != "class")
        {
            throw "NOT CLASS";
        }
    }
    catch (std::exception &e)
    {
        std::cout << e << std::endl;
    }
}

#endif