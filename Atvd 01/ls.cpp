#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, const char* argv[])
{
    if (argc < 2) {
        std::cerr << "Specify a folder\n";
        return 1;
    }

    std::string command = "ls " + std::string(argv[1]); // Note the space after ls
    return system(command.c_str());
}