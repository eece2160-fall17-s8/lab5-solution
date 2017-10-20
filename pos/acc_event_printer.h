#ifndef ACC_EVENT_PRINTER_H_
#define ACC_EVENT_PRINTER_H_

#include "acc_event_handler.h"

class AccEventPrinter : public AccEventHandler {
 public:
   void HandleAccEvent(int code, short value);    
};

#endif  // ACC_EVENT_PRINTER_H_
