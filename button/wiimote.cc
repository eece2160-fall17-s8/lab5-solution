#include "wiimote.h"

#include <fcntl.h>
#include <cstdlib>
#include <iostream>

void Wiimote::PrintButtonEvent(int code, int value) {
  std::cout << "Event: code=" << code << ", value=" << value <<"\n";
}

Wiimote::Wiimote() {
  fd = open("/dev/input/event2", O_RDONLY);
}

Wiimote::~Wiimote() {
  close(fd);
}

void Wiimote::Listen() {
  char buffer[32];
  while(1) {
    read(fd, buffer, 32);
    
    int code = buffer[10];
    int value = buffer[12];

    PrintButtonEvent(code, value);
  }
}
