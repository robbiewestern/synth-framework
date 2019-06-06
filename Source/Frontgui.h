/*
 ==============================================================================
 
 Frontgui.h
 Created: 23 May 2019 9:19:11pm
 Author:  Robbie Western
 
 ==============================================================================
 */

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/*
 */
class Frontgui    : public Component
{
public:
    Frontgui(SynthFrameworkAudioProcessor&);
    ~Frontgui();
    
    void paint (Graphics&) override;
    void resized() override;
    
    
private:
    Slider mastergainSlider;
    Slider pbupSlider;
    Slider pbdownSlider;
    
    
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> mastergainVal;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> pbupVal;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> pbdownVal;
    
    
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SynthFrameworkAudioProcessor& processor;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Frontgui)
};
