#ifndef _COMMON_H
#define _COMMON_H

#include <stdint.h>
#include "tun.h"

int check_incoming_packet(uint8_t *buf, ssize_t len);
void construct_keepalive_packet(struct tundev *tun, uint8_t *buf);

#ifdef ANDROID
int protect_socket(int fd);
#endif

#endif // for #ifndef _COMMON_H
