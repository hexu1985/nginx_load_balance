#ifndef __unp_udp_server_h
#define __unp_udp_server_h

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include "error.h"


int udp_server(const char *, const char *, socklen_t *);
int Udp_server(const char *, const char *, socklen_t *);

#endif
