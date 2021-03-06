# **Workshop IoT with ESP8266**

# *__1. Hello World!__*

## **See Messages on Serial Monitor :heavy_check_mark:**

  1. First, connect ESP8266 NodeMCU to your laptop via USB cable. 
  
  2. Open Arduino IDE, then set board & port as follow:
    
      - Go to **_Tools - Board_** and choose **_NodeMCU 1.0 (ESP-12E Module)_**.
    
      - Go to _**Tools - Port**_ and choose the appropriate port, e.g. __COM5__.
  
  3. Type sketch below:

      ```c++
      void setup() {
        Serial.begin(115200);
        Serial.println("Hello World!");
        delay(2000);
      }

      void loop() {
        Serial.println("Ini pesan loop");
        delay(1000);
      }
      ```
  4. Click __*Upload*__ :arrow_right: button, wait until uploading process done. Click __*Serial Monitor*__ :mag_right: button, set baudrate on _**115200 baud**_ and you will see these kind of messages on Serial Monitor:

      ![Lintang_Serial_Monitor](https://1.bp.blogspot.com/-RmEiAnUMH4U/Wv0zUX-cggI/AAAAAAAAEJo/17BCYt-8AwAPBpiZjEf9--hY8_On-tlWgCLcBGAs/s640/z6.png)

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Digital & Analog Output](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/2_Digital_Analog_Output)*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)**_
  2.|Digital & Analog Output|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/2_Digital_Analog_Output)**_
  3.|Digital & Analog Input|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/3_Digital_Analog_Input)**_
  4.|Analog & Digital I/O|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/4_Digital_Analog_Input_Output)**_
  5.|ESP8266 & LDR Sensor|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/5_ESP8266_LDR)**_
  6.|ESP8266 WiFi Scanner|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/6_ESP8266_WiFi_Scanner)**_
  7.|Connecting ESP8266 to A WiFi Network|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/7_Connect_to_A_WiFi)**_
  8.|ESP8266 & Blynk|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/8_ESP8266_Blynk)**_
  9.|ESP8266 & Thinger.io|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/9_ESP8266_Thinger)**_

#
