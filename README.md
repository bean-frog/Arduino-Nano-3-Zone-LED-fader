# Arduino-Nano-3-Zone-LED-fader

***CURRENTLY UNFINISHED/IN TESTING***

**UPLOADING:**
  - download arduino IDE from https://arduino.cc/en/software
  - install the IDE
  - download this github repo as a .zip and extract 
  - in the folder double click the file called "ledfader.ino", it should open a new arduino IDE window
  - look at the top of the screen for a thing that says tools, and click it
  - in the drop-down menu click "board" and select "Arduino Nano"
  - in the menu again, find "Port" and select whatever comes up in options which is usually COM3 (THE ARDUINO MUST BE PLUGGED IN TO YOUR COMPUTER)
  - click verify (the round button with a checkmark) and make sure there are no errors (there is a console at the bottom)
  - if there are no errors, click upload which is next to verify, and if there were either google it or send me a screenshot
  - the lamp should start cycling through some shades of blue/green and maybe purple if i coded that right
  - you can get back to these instructions either through the github page, or by double clicking the "README.md" file if you've downloaded the repository
  



**for people building something with this and not recieving the circuit as a gift without the code because i didnt finish it in time ahaha**

Used pins are in the top comment section in the .ino file
fades between cooler colors, to switch to warmer colors, change some of the blue and greens to red (look up rgb color blending for ideas I guess)
connect a common VCC from the 5v pin on the nano (use 5v led strips duhhh) and connect the r, g, and b pins according to the comments in the code.
I recommend using 5-10 LEDs per zone, to ensure enough power can get to each (or just use a slightly stronger powersupply, the VIN pin can handle up to 12 volts if I remember correctly.
if you actually know how to code well instead of "borrowing" and/or have improvement ideas make a PR
