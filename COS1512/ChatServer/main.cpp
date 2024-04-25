#include <iostream>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

using namespace std;

int main() {
    int serverSocket, newSocket;
    char buffer[1024];
    struct sockaddr_in serverAddr, newAddr;
    socklen_t addrSize;

    // Create a socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        perror("Error in socket");
        exit(1);
    }

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(8086);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    // Bind the socket to the server address
    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        std::cerr << "Error in binding: " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }

    // Listen for incoming connections
    if (listen(serverSocket, 10) == 0) {
        std::cout << "Listening..." << std::endl;
    } else {
        std::cout << "Error in listening" << std::endl;
    }

    addrSize = sizeof(newAddr);
    newSocket = accept(serverSocket, (struct sockaddr*)&newAddr, &addrSize); // Accept connection

    while (1) {
        // Receive a message from the client
        recv(newSocket, buffer, 1024, 0);
        if (strcmp(buffer, ":exit") == 0) {
            std::cout << "Disconnected from client" << std::endl;
            break;
        } else {
            std::cout << "Client: " << buffer << std::endl;
        }

        // Reply to the client
        std::string reply;
        std::cout << "Server: ";
        cin.getline(buffer, sizeof(buffer));
        reply = std::string(buffer);
        send(newSocket, reply.c_str(), reply.length(), 0);
    }

    close(newSocket);
    close(serverSocket);

    return 0;
}
