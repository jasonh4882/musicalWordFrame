# Word Frame Music Box

## Description

This project was made as a Christmas gift for Christmas 2020.
The goal was to create a picture frame box that would play the song *"Paper Rings"* by Taylor Swift
and light up the lyrics as they were sung. 
This was accomplished using an Arduino Mega microcontroller to both play the music and control the LEDs.
The main notable concession that was made was in the audio. 
The song had to be played as beep tones as the arduino was not able to properly play audio files.

## Imagery

![boardSchematic](boardSchematic.png)


## Hardware Used

- Arduino Mega microcontroller
- 5mm White LEDs
- Shadow Box Frame
- 2 x 3 Watt 8 Ohm Speakers
- 2 x 5 VDC relays
- Push Button
- Msc. other materials (glue, screws, wire, etc.)
    
## Software

Unfortunatley, the final version of the sketch has been lost.
The laptop that was used to write the program was wiped; 
only an 8 hour behind backup (*Xmas2020v1.ino*) now exists. 
While this backup is incomplete, it still shows the underlying algorithm that was used. 
The arduino IDE was used to write and upload the cketch to an Arduino Mega via a USB connection.
The Arduino IDE can be found on the official
[Arduino website](https://www.arduino.cc/en/software "Arduino IDE Download page").

Fortunatley, the final sketch still exists in the finished project. 
Unfortunatley, this also means that it is not possible to replecate or make any changes to the project.

## Installation

As mentioned in the previous section; since the final sketch file was lost, 
there is currently no way to replecate the end result of this project. 
The backup can be uploaded and if this project gets reworked at a later date, 
the process will be the same.

1. Download and install the Arduino IDE 
[here](https://www.arduino.cc/en/software "Arduino IDE Download page")
1. Download the *Xmas2020v1.ino* file and place it in a folder called *Xmas2021*
 inside the Arduino sketch folder (*this by default is located in "Documents"*)
1. Connect an Arduino Mega to the computer via a USB A to USB B cable.
1. Verify that the device is connected by checking to see if a new Serial device appeared in the 
 **Tools>Port** Navigation menu. Select the new device.
1. Click the **Verify** checkmark button located under **File**.
 If there are no errors and the sketch successfully verifies, click the **Upload** button.
1. Open the serial monitor located in either the **Tools** navigation menu 
or by clicking the **Serial Monitor** magifying glass button in the far left

## Roadmap



## Authors & Acknowledgments



## Project Status

