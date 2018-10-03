#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <fstream>

class Logger
{
private:
    typedef struct actions {
        std::string name;
        void (Logger::*fnPtr)(std::string const &);
    }              t_actions;
    std::string _fileName;
    t_actions   _map[2];

    void logToConsole(std::string const & str);
    void logToFile(std::string const & str);
    std::string makeLogEntry(std::string const & msg);
public:
    Logger(std::string filename);

    void log(std::string const & dest, std::string const & message);
};

#endif