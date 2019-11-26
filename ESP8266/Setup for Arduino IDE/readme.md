1. Download and install Arduino IDE from: https://www.arduino.cc/en/Main/Software
2. Install USB Driver for ESP module:
  - download driver for NodeMCU CP2010 from here: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
  - install the driver
3.  Configure Arduino IDE
  - open Arduino IDE
  - go to: File => Preferences => Additional Boards Manager URLs:
  - paste this link in the box from step 1: https://arduino.esp8266.com/stable/package_esp8266com_index.json
  - restart IDE
  - tools => board => Board Manager => search for 8266
  - install driver: esp8266 by ESP8266 Community
  - Tools => board => select: NodeMCU 1.0 (ESP-12E Module)
  - Tools => port => select same port as you see in device manager
  - DONE!
