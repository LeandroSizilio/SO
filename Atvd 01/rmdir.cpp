#include <iostream>
#include <string>

int main() {
    std::string dirName;
    std::cout << "Enter the name of the directory to be deleted (if empty): ";
    std::getline(std::cin, dirName);

    std::string command = "rmdir " + dirName;
    system(command.c_str());

    return 0;
}