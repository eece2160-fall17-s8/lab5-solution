#include "wiimote.h"
#include "zedboard.h"
#include "acc_event_printer.h"
#include "acc_event_led_viewer.h"

int main() {
  ZedBoard zb;
  AccEventLedViewer led_viewer(&zb);
  Wiimote wiimote(&led_viewer);
  wiimote.Listen();
  return 0;
}
