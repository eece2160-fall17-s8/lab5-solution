#ifndef POS_TRACKER_H_
#define POS_TRACKER_H_

#include <iostream>
#include <fstream>

#include "acc_event_handler.h"

class PosTracker : public AccEventHandler {
  std::ofstream output;
  double speed[3];
  double pos[3];
  double time[3];
  bool started;

  double GetTime();

 public:
  PosTracker();
  ~PosTracker();

  void HandleAccEvent(int code, short value); 
};

#endif  // POS_TRACKER_H_
