**Project 25：****Human Induction Lamp**

**1.****Introduction**

Human body induction lamp is used commonly in the dark corridor area.
With the development of science and technology, the use of the human
body induction lamp is very common in our real life, such as the
corridor of the community, the bedroom of the room, the garage of the
dungeon, the bathroom and so on.

In this project, we will learn how to use a PIR motion sensor, a LED,
and a photoresistor to make a human induction lamp.

2.  **Components**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/c62c393e0f1d6a2c7dc297e4ccf9b595.jpeg" style="width:1.22153in;height:0.59653in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.75972in;height:1.8625in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/7eb361d680dfa351f07f8527aeb37abd.png" style="width:0.275in;height:1.17361in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/8cf9b1b3a5fec374cde3c5f0537567cb.png" style="width:0.21042in;height:0.94583in" /></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>ESP32*1</td>
<td>Breadboard*1</td>
<td>Red LED*1</td>
<td>10KΩResistor*1</td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/82b6a0e286b6ca25c06c6353397bad79.png" style="width:0.19097in;height:1.26597in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/99272d75b3f952a0c2dd770e2f6f5a7c.png" style="width:1.25347in;height:0.94097in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/51ab4ab6eefe8ba8f66234989d5282de.png" style="width:0.21736in;height:0.95833in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/849dad1bcb5c3177310976501fbc96c9.png" style="width:1.14583in;height:0.96806in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.77222in;height:0.77986in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>Photoresistor*1</td>
<td>PIR Motion Sensor*1</td>
<td>220ΩResistor*1</td>
<td>M-F Dupont Wires</td>
<td>Jumper Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Wiring Diagram**
    
    ![](/media/69f49d65054a9246acf4adc534217027.png)

4.  **Test Code**

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Human Induction Lamp</p>
<p>* Description : Controlling the LED by photosensitive sensor and PIR motion sensor.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC0 36 //the pin of the photosensitive sensor</p>
<p>#define PIN_LED 4 // the pin of the LED</p>
<p>#define pirPin 15 // the pin of the PIR motion sensor</p>
<p>byte pirStat = 0; // the state of the PIR motion sensor</p>
<p>void setup() </p>
<p>void loop() </p>
<p>else</p>
<p>}</p>
<p>else</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

5.  **Test Result**

Compile and upload the code to ESP32, after the code is uploaded
successfully, power up with a USB cable and you will see that when your
hand covers the photosensitive part of the photoresistor to simulate
darkness, then shake your other hand in front of the PIR motion sensor,
the external LED will light up. If the photosensitive part is not
covered, then shake your hand in front of the PIR motion sensor and the
LED will be turned off.
