#include "acc_event_led_viewer.h"

#include <iostream>

AccEventLedViewer::AccEventLedViewer(ZedBoard *zedboard) {
  this->zedboard = zedboard;
}

void AccEventLedViewer::HandleAccEvent(int code, short value) {
  if (code != 3) return;  // X only

  short acc = value;
  std::cout << acc << ",";
  if (acc < 0) acc = -acc;
  if (acc > 100) acc = 100;

  std::cout << acc << ",";

  acc = acc / (100/8);

  std::cout << acc << "\n";

  for (int i = 0; i < 8; i++) {
    if (acc > i) {
      zedboard->SetLed(i, 1);
    } else {
      zedboard->SetLed(i, 0);
    }
  }

}
