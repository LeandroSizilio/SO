#include <iostream>
#include <string>

int main() {
    std::string dirName;
    std::cout << "Digite o nome do diretório a ser criado: ";
    std::getline(std::cin, dirName);

    std::string command = "mkdir " + dirName;
    system(command.c_str());

    return 0;
}