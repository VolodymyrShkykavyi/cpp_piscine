#include "Logger.hpp"

Logger::Logger(std::string filename) {
    this->_fileName = filename;
    this->_map[0].name = "console";
    this->_map[0].fnPtr = &Logger::logToConsole;
    this->_map[1].name = "file";
    this->_map[1].fnPtr = &Logger::logToFile;
}

std::string Logger::makeLogEntry(std::string const &msg) {
    std::stringstream ss;
    time_t  now = time(0);
    tm  *ltm = localtime(&now);

    ss << "["
        << 1900 + ltm->tm_year << "/"
        << std::setw(2) << std::setfill('0') << ltm->tm_mon << "/"
        << std::setw(2) << std::setfill('0') << ltm->tm_mday << "/"
        << " "
        << std::setw(2) << std::setfill('0') << ltm->tm_hour << ":"
        << std::setw(2) << std::setfill('0') << ltm->tm_min << ":"
        << std::setw(2) << std::setfill('0') << ltm->tm_sec
        << "] "
        << msg << std::endl;

    return ss.str();
}

void Logger::logToConsole(std::string const &str) {
    std::cout << this->makeLogEntry(str);
}

void Logger::logToFile(std::string const &str) {
    std::ofstream outFile;

    outFile.open(this->_fileName, std::ofstream::out | std::ofstream::app);
    if (outFile.is_open()) {
        outFile << this->makeLogEntry(str);
        outFile.close();
    }

}

void Logger::log(std::string const &dest, std::string const &message) {
    for (int i = 0; i < 2; i++) {
        if (this->_map[i].name == dest) {
            (this->*(this->_map[i].fnPtr))(message);
            break;
        }
    }
}