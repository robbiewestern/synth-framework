/*
  ==============================================================================

    Filter.h
    Created: 23 May 2019 9:18:12pm
    Author:  Robbie Western

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/*
 */
class Filter    : public Component
{
public:
    Filter(SynthFrameworkAudioProcessor&);
    ~Filter();
    
    void paint (Graphics&) override;
    void resized() override;
    
private:
    Slider filterCutoff;
    Slider filterRes;
    
    ComboBox filterMenu;
    
    ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> filterTypeVal;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> filterVal;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> resVal;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SynthFrameworkAudioProcessor& processor;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Filter)
};
