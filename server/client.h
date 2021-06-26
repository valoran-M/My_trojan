#ifndef CLIENT_H
#define CLIENT_H

#include <netinet/in.h>

typedef struct s_client
{
    struct sockaddr_in clientAdresse;
    int clientSocket;
    int admin;
} Client;

#endif