1. Download and install Arduino IDE from: https://www.arduino.cc/en/Main/Software
2. Install USB Driver for ESP module:
      - download driver for NodeMCU CP2010 from here: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
      - install the driver
3.  Configure Arduino IDE
      - open Arduino IDE
      - go to: File > Preferences > Additional Boards Manager URLs > Settings  tab:
      - locate: 'Additional Boards Manager URLs' input box
      - paste this link in the input from above: https://arduino.esp8266.com/stable/package_esp8266com_index.json
      - restart IDE
      - tools > board > Board Manager > search for esp8266
      - install driver: esp8266 by ESP8266 Community
      - Tools > board > select: NodeMCU 1.0 (ESP-12E Module)
      - open Device Manager
      - scroll down to Ports section then expand it
      - connect device to pc
      - look for new device and note down the COM port for the new device
      
      - ![device_manager](https://user-images.githubusercontent.com/31028022/69596255-af995380-100a-11ea-9863-792ed2bc4426.PNG)
     
     - open Arduiono IDE
      - Tools > port > select the port you have allocated in Device Manager (usually COM5 or COM1)
      - DONE!
