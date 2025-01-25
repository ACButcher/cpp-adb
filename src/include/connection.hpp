#pragma once

class Connection {
private:
    std::string hostname;
    int port;
    std::optional<float> timeout;
    int socket;
    
public:
    Connection();
    Connection(std::string hostnmae, int port, std::optional<float> timeout);

    int connect();
};