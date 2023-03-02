#include <iostream>
#include <string>

int main()
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "  MORSE CODE TRANSLATOR" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "    Press (q) to quit" << std::endl;

    // Infinite loop to keep asking for morse code until (q)
    // is pressed

    for (;;) {
        std::string input;
        std::cout << "\nEnter morse code : ";
        std::cin >> input;

        if (input == ".-") {
            std::cout << "A" << std::endl;
        } else if (input == "-...") {
            std::cout << "B" << std::endl;
        } else if (input == "-.-.") {
            std::cout << "C" << std::endl;
        } else if (input == "-..") {
            std::cout << "D" << std::endl;
        } else if (input == ".") {
            std::cout << "E" << std::endl;
        } else if (input == "..-.") {
            std::cout << "F" << std::endl;
        } else if (input == "--.") {
            std::cout << "G" << std::endl;
        } else if (input == "....") {
            std::cout << "H" << std::endl;
        } else if (input == "..") {
            std::cout << "I" << std::endl;
        } else if (input == ".---") {
            std::cout << "J" << std::endl;
        } else if (input == "-.-") {
            std::cout << "K" << std::endl;
        } else if (input == ".-..") {
            std::cout << "L" << std::endl;
        } else if (input == "--") {
            std::cout << "M" << std::endl;
        } else if (input == "-.") {
            std::cout << "N" << std::endl;
        } else if (input == "---") {
            std::cout << "O" << std::endl;
        } else if (input == ".--.") {
            std::cout << "P" << std::endl;
        } else if (input == "--.-") {
            std::cout << "Q" << std::endl;
        } else if (input == ".-.") {
            std::cout << "R" << std::endl;
        } else if (input == "...") {
            std::cout << "S" << std::endl;
        } else if (input == "-") {
            std::cout << "T" << std::endl;
        } else if (input == "..-") {
            std::cout << "U" << std::endl;
        } else if (input == "...-") {
            std::cout << "V" << std::endl;
        } else if (input == ".--") {
            std::cout << "W" << std::endl;
        } else if (input == "-..-") {
            std::cout << "X" << std::endl;
        } else if (input == "-.--") {
            std::cout << "Y" << std::endl;
        } else if (input == "--..") {
            std::cout << "Z" << std::endl;
        } else if (input == ".----") {
            std::cout << "1" << std::endl;
        } else if (input == "..---") {
            std::cout << "2" << std::endl;
        } else if (input == "...--") {
            std::cout << "3" << std::endl;
        } else if (input == "....-") {
            std::cout << "4" << std::endl;
        } else if (input == ".....") {
            std::cout << "5" << std::endl;
        } else if (input == "-....") {
            std::cout << "6" << std::endl;
        } else if (input == "--...") {
            std::cout << "7" << std::endl;
        } else if (input == "---..") {
            std::cout << "8" << std::endl;
        } else if (input == "----.") {
            std::cout << "9" << std::endl;
        } else if (input == "-----") {
            std::cout << "0" << std::endl;
        } else if (input == "q") {
            break;
        } else {
            std::cout << "\nNot morse code\n" << std::endl;
        }
    }
    return 0;
}