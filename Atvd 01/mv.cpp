#include <iostream>
#include <filesystem>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "informe o arquivo de origem e de destino!" << std::endl;
        return 1;
    }

    std::string source_file = argv[1];
    std::string destination_file = argv[2];

    try {
        std::filesystem::rename(source_file, destination_file);
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}