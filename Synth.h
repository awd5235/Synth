/*============== Synth Class Definition ===========
  Purpose: Define a Software synthesizer comprised of a vector of floats
 
 
 ==================================================*/

#pragma once

#ifndef Synth_h
#define Synth_h

#include <vector>
#include <string>

class Synth{
  
private:
    std::vector<float> synthBuff; // Vector of floats
    
public:
    Synth()=default;    // Default constructor
    
};


#endif /* Synth_h */
