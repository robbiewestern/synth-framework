/*
  ==============================================================================

    SynthSound.h
    Created: 22 May 2019 5:03:08pm
    Author:  Robbie Western

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class SynthSound : public SynthesiserSound
{
    
public:
    
    bool appliesToNote(int midiNoteNumber) override
    {
        return true;
    }
    
    bool appliesToChannel(int midiChannel) override
    {
        return true;
    }
    
private:
    
    
    
};
