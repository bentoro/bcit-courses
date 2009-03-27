#ifndef LOGIC_H
#define LOGIC_H

#include "general.h"
#include "graphics.h"
#include "DPlaya.h"

void fork_off(int tcpSockFd, int udpSockFd, DPlaya allPlayers[]);
void sig_handler (int sig);
void handle_input(int tcpSockFd, int udpSockFd, SDL_Event event);

#endif

