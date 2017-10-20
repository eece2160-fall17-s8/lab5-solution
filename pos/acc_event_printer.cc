#include "acc_event_printer.h"

#include <iostream>

void AccEventPrinter::HandleAccEvent(int code, short value) {
  std::cout << "Event: code=" << code << ", value=" << value <<"\n";
}
