#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "ClassBuilder.h"

void sortLines(std::vector<std::string> lines);
void sortLine(std::string line);

int main (int argc, char** argv) {

    // Command stuff later

    // Create builder classes
    // All inherit from builder abstract class
        // ClassBuilder 
            // has a map with a vector of attributes
            // std::map <string className, vector<string> attributes>
            // checks for 
            // "has a" relations
            // "is a" relations

    ClassBuilder cb;

    // Read in file

    // Identify and sort each line
    
} 

void sortLines(std::vector<std::string> lines) {
    for (std::string line : lines) {
        sortLine(line);
    }
}

void sortLine(std::string line) {

}