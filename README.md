# Emergency-Vehicle-Optimization
The main objective of this project is to minimize the traffic congestion for the emergency vehicles by using sensors and connecting to network hospitals
We are using the sensors to detect the approach of an vehicle and sends signal to the control system to process the data and send commands to change the lights and clear the way

Hardware Components:

1. RFID Reader
2. RFID Tag (attached to the emergency vehicle)
3. Arduino Board (or similar microcontroller)
4. LED (to indicate authorization)
5. Buzzer (to alert of unauthorized access)
6. Traffic Signal Controller (interface to change traffic signals)

How it Works:

1. The RFID reader detects the approaching emergency vehicle and reads its RFID tag ID.
2. The RFID tag ID is sent to the Arduino board through the serial communication.
3. The Arduino board checks if the received RFID tag ID matches the authorized ID stored in the code.
4. If the IDs match, the Arduino board sends a signal to the traffic signal controller to change the signals in favor of the emergency vehicle.
5. The LED is set to the authorized state, and a message is printed to the serial monitor indicating authorization.
6. If the IDs do not match, the LED is set to the unauthorized state, and a message is printed to the serial monitor indicating unauthorized access.

