#pragma once

#include <string>

class Client {
private:
    std::string hostname;
    int port;

public:
    Client(std::string hostname, int port);


};