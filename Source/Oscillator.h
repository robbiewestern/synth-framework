/*
  ==============================================================================

    Oscillator.h
    Created: 24 May 2019 9:20:25pm
    Author:  Robbie Western

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/*
 */
class Oscillator    : public Component
{
public:
    Oscillator(SynthFrameworkAudioProcessor&);
    ~Oscillator();
    
    void paint (Graphics&) override;
    void resized() override;
    
private:
    ComboBox oscMenu;
    
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> waveSelection;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SynthFrameworkAudioProcessor& processor;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Oscillator)
};
