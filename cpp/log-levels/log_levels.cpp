#include <string>
#include <iostream>

namespace log_line {

std::string message(std::string line) { 
    int startMessage = line.find(":") + 2;
    std::string message = line.substr(startMessage);
    return message;
}

std::string log_level(std::string line) {
    // return the log level
    // std::string message = line.find("ERROR") || line.find("INFO") || line.find("WARNING");
    int startMessage = line.find("[") + 1;
    int endMessage = line.find("]");
    std::string message = line.substr(startMessage, endMessage - startMessage);
    return message;
}

std::string reformat(std::string line) {
    // return the reformatted message
    // going to receive something like this "[ERROR]: Invalid operation"
    std::cout << message(line) << " (" << log_level(line) << ")" << std::endl;
    return 0;
}
}  
