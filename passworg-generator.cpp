#include <iostream>
#include <vector>
#include <algorithm> // for std::shuffle
#include <random>    // for std::mt19937 and std::random_device

std::vector<char> letters = {'a','b','c','d','e','f','g','h','i','j','k'};

void generate_random();
void loop();

int main() {
    generate_random();
    loop();
    return 0;
}

void generate_random() {
    // 1. Set up random engine
    std::random_device rd;
    std::mt19937 g(rd());

    // 2. Shuffle the global vector
    std::shuffle(letters.begin(), letters.end(), g);

    // 3. Print shuffled contents
    std::cout << "Shuffled vector: ";
    for (char c : letters) {
        std::cout << c << " ";
    }
    std::cout << "\n";

    // Or pick just one random character (the first one after shuffle):
    std::cout << "Random character picked: " << letters[0] << "\n";
}

void loop() {
    for (char c : letters){
        std::cout <<"\nLetters:"<< c;  
    }
}
