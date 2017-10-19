#ifndef ACC_EVENT_LED_VIEWER_H_
#define ACC_EVENT_LED_VIEWER_H_

#include "acc_event_handler.h"
#include "zedboard.h"

class AccEventLedViewer : public AccEventHandler {
  ZedBoard* zedboard;
 public:
  AccEventLedViewer(ZedBoard *zedboard);
  void HandleAccEvent(int code, short value);
};

#endif  // ACC_EVENT_LED_VIEWER_H_
