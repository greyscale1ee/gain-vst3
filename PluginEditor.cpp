/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NewProjectAudioProcessorEditor::NewProjectAudioProcessorEditor (NewProjectAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.


    // Gain slider
    //gain.setSliderStyle(Slider::SliderStyle::LinearVertical);
    //gain.setTextBoxStyle(Slider::TextBoxBelow, true, 100, 25);
    //gain.setRange(0.0, 1.5);
    //gain.setValue(processor.volume_output);
    //gain.addListener(this);
    //addAndMakeVisible(gain);
    ///
}

NewProjectAudioProcessorEditor::~NewProjectAudioProcessorEditor()
{
}

//==============================================================================
void NewProjectAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    gain.setBounds(getLocalBounds());
    
}

void NewProjectAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

void NewProjectAudioProcessorEditor::sliderValueChanged(Slider* slider)
{
    //if (slider == &gain)
    //{
    //    processor.volume_output = gain.getValue();

    //}
}
