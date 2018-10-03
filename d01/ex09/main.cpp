#include "Logger.hpp"

int main()
{
    Logger log("my.log");

    log.log("file", "test file1");
    log.log("file", "test file2");
    log.log("file", "test file3");

    log.log("console", "test console1");
    log.log("console", "test console2");
    log.log("console", "test console3");

}