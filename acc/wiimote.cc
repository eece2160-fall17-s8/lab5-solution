#include "wiimote.h"

#include <fcntl.h>
#include <cstdlib>
#include <iostream>

void Wiimote::PrintAccEvent(int code, short value) {
  std::cout << "Event: code=" << code << ", value=" << value <<"\n";
}

Wiimote::Wiimote() {
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

    PrintAccEvent(code, value);
  }
}
