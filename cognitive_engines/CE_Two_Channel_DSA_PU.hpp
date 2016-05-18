#ifndef _CE_TWO_CHANNEL_DSA_PU_
#define _CE_TWO_CHANNEL_DSA_PU_

#include "CE.hpp"
#include "timer.h"
#include <sys/time.h>

class CE_Two_Channel_DSA_PU : public Cognitive_Engine {
public:
  CE_Two_Channel_DSA_PU(int argc, char**argv);
  ~CE_Two_Channel_DSA_PU();
  virtual void execute(ExtensibleCognitiveRadio *ECR);

private:

  /*
  //Jason
  static constexpr float freq_a = 774e6;
  static constexpr float freq_b = 766e6;
  static constexpr float freq_x = 768e6;
  static constexpr float freq_y = 772e6;
  */

  //Eric
  static constexpr float freq_a = 770e6;
  static constexpr float freq_b = 769e6;
  static constexpr float freq_x = 765e6;
  static constexpr float freq_y = 764e6;
  
  struct timeval tv;
  time_t switch_time_s;
  int period_s;
  int first_execution;
};

#endif
