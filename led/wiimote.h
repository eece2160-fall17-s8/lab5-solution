#ifndef WIIMOTE_H_
#define WIIMOTE_H_

#include "acc_event_handler.h"

/**
 * Wiimote encapsulates the interaction with the wiimote hardware
 */
class Wiimote {

  int fd;
  AccEventHandler *acc_event_handler;

 public:

  /**
   * The Constructor opens the virtual file
   */
  Wiimote(AccEventHandler *acc_event_handler);

  /**
   * The Destructor closes the virtual file
   */
  ~Wiimote();

  /**
   * Listen runs an infinite loop that keeps listening to button events
   */
  void Listen();
};

#endif  // WIIMOTE_H_
