#include "connection.hpp"

#include <sys/socket.h>

Connection::Connection() : 
    hostname("localhost"),
    port(5037),
    timeout(std::nullopt),
    socket(-1) {}

Connection::Connection(
    std::string hostname,
    int port, 
    std::optional<float> timeout
) : hostname(hostname), port(port), timeout(timeout), socket(-1) {}

int Connection::connect () {
    if ((this.socket = socket(AF_INET, SOCK_STREAM)) == -1) {
        return -1;
    }

    if (setsockopt(this.socket, SOL_SOCKET, SO_LINGER) == -1) {
        return -1;
    }
}