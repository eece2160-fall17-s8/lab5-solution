#include "wiimote.h"
#include "acc_event_printer.h"

int main() {
  AccEventPrinter printer;
  Wiimote wiimote(&printer);
  wiimote.Listen();
  return 0;
}
