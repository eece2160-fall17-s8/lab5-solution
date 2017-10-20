#include "wiimote.h"

#include <fcntl.h>
#include <cstdlib>
#include <iostream>

Wiimote::Wiimote(AccEventHandler *acc_event_handler) {
  this->acc_event_handler = acc_event_handler;
  fd = open("/dev/input/event0", O_RDONLY);
}

Wiimote::~Wiimote() {
  close(fd);
}

void Wiimote::Listen() {
  char buffer[32];
  while(1) {
    read(fd, buffer, 32);
    
    int code = buffer[10];
    short value = *(short *)(buffer + 12);

    acc_event_handler->HandleAccEvent(code, value);
  }
}
