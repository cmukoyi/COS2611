#include <iostream>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

using namespace std;

int main() {
    int clientSocket;
    char buffer[1024];
    struct sockaddr_in serverAddr;

    // Create a socket
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        perror("Error in socket");
        exit(1);
    }

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(8086);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Connect to the server
    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Error in connection");
        exit(1);
    }

    while (1) {
        // Send a message to the server
        cout << "You: ";
        cin.getline(buffer, sizeof(buffer));
        send(clientSocket, buffer, strlen(buffer), 0);
        if (strcmp(buffer, ":exit") == 0) {
            cout << "Disconnected from server" << endl;
            break;
        }

        // Receive a message from the server
        recv(clientSocket, buffer, 1024, 0);
        cout << "Server: " << buffer << endl;
    }

    close(clientSocket);

    return 0;
}
