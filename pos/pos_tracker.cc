#include "pos_tracker.h"

#include <sys/time.h>

PosTracker::PosTracker() {
  output.open("output.csv");

  for (int i = 0; i < 3; i++) {
    speed[i] = 0;
    time[i] = 0;
    pos[i] = 0;
  }
  started = false;
}

PosTracker::~PosTracker() {
  output.close();
}

double PosTracker::GetTime() {
  double t;
  struct timeval tv;
  gettimeofday(&tv, NULL);
  t = 1.0 * tv.tv_sec + 1.0 * tv.tv_usec * 1e-6;
  return t;
}

void PosTracker::HandleAccEvent(int code, short value) {  
  if (!started) {
    time[0] = GetTime();
    time[1] = GetTime();
    time[2] = GetTime();
    started = true;
    return;
  }
  
  int dim = 0;
  if (code == 4) dim = 1;
  if (code == 5) dim = 2;
  double now = GetTime();
  double duration = now - time[dim];
  std::cout << "duration: " << duration << "\n";
  time[dim] = now;
  
  speed[dim] += duration * value;
  pos[dim] += speed[dim] * duration;

  std::cout << now << ", ";
  for (int i = 0; i < 3; i++) {
    std::cout << speed[i] << ", ";
  }

  for (int i = 0; i < 3; i++) {
    std::cout << pos[i] << ", ";
  }
  std::cout << "\n";
}
