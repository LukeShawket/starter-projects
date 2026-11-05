#include <iostream>
#include <string>
#include <vector>




int main(){
    // Declaring a raw array - Raw array size can't be modified.
    std::string people[3] = {"Alim", "Orkesh", "Kutluk"};

    // Declaring a vector array which can be dynamicly stored in memory.
    std::vector<std::string> names = {"John", "Thom", "Philip"};

    // Adding string items into vector array.
    names.push_back("Hannah");
    names.push_back("Nathan");

    // Printing second item from the raw array.
    std::cout << people[1] << std::endl;

    // Index based for loop.
    for (int i=0; i < 3; ++i){
        std::cout << people[i] << std::endl;
    }

    // Range based for loop.
    for (const std::string& name : names){
        std::cout << name << std::endl;
    }

    // Erasing one item from vector array at position 1
    names.erase(names.begin() + 1);

    // Erasing a range of items from vector array
    names.erase(names.begin() + 0, names.begin() + 2);

    std::cout <<"After items removed from vector 'names'" << std::endl;

    if (names.size() < 3){
        for (const std::string& name : names){
            std::cout << name << std::endl;
        }
    }

    return 0;
}

