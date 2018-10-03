#include <iostream>
#include <fstream>
#include <sys/stat.h>

bool is_dir(const char *path) {
    struct stat s;

    if (stat(path, &s) == 0) {
        if (s.st_mode & S_IFDIR) {
            return true;
        }
    }
    return false;
}

int main(int argc, char **argv) {
    std::string str;
    std::ifstream file;
    int firstOut = 1;

    if (argc == 1) {
        while (std::getline(std::cin, str)) {
            if (firstOut) {
                firstOut = 0;
            } else {
                std::cout << std::endl;
            }
            std::cout << str;
        }
    } else {
        for (int i = 1; i < argc; i++) {

            if (is_dir(argv[i])) {
                std::cout << argv[0] << ": " << argv[i] << ": Is a directory\n";
                continue;
            }

            file.open(argv[i], std::ifstream::in);
            if (file.is_open()) {
                std::cout << "file";
                while (std::getline(file, str)) {
                    if (firstOut) {
                        firstOut = 0;
                    } else {
                        std::cout << std::endl;
                    }
                    std::cout << str;
                }
                firstOut = 1;
                file.close();
            } else {
                std::cout << argv[0] << ": " << argv[i] << ":  No such file or directory\n";
            }
        }
    }
}