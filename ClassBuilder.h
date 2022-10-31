#ifndef CLASSBUILDER_H
#define CLASSBUILDER_H

#include <map>
#include <vector>
#include <sstream>
#include <set>
#include <exception>
#include <iostream>

#include "Builder.h"

class ClassBuilder : public Builder
{
private:
    std::vector<std::string> tokenize(std::string line);

    // Whatever kind of data structure acts as a dictionary with many values
    // std::map<std::string, std::vector<std::string>> attributesMap;
    std::set<std::string> classNames;


public:
    ClassBuilder(/* args */);
    ~ClassBuilder();

    void evaluateLine(std::string line);

    ClassBuilder::ClassBuilder()
    {
    }

    ClassBuilder::~ClassBuilder()
    {
    }
};

#endif