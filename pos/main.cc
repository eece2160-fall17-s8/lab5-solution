#include "wiimote.h"
#include "pos_tracker.h"

int main() {
  PosTracker pos_tracker;
  Wiimote wiimote(&pos_tracker);
  wiimote.Listen();
  return 0;
}
