# Project 27：Temperature and Humidity Meter 

1.  **Introduction**

In winter, the air is very dry, coupled with cold, the skin of the human
body will be easy to be cracked, so you need to use a humidifier to
increase the humidity of the air at home. However, how to identify
whether the air is too dry? Then you need an equipment to detect the air
humidity.

In this project, we will learn how to use the temperature and humidity
sensor. We will use the sensor to make a
[hygrothermograph](C:/Users/NINGMEI/AppData/Local/youdao/dict/Application/9.0.1.1/resultui/html/index.html#/javascript:;),
and combine it with a LCD 128X32 DOT to display the temperature and
humidity values.

2.  **Components**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/56053f7126905c6def63919c661d5c0a.jpeg" style="width:1.59722in;height:0.77986in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.70139in;height:1.71944in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/34bafe8113e2db36c8f0c8492b835474.png" style="width:1.27292in;height:0.96111in" /></td>
</tr>
<tr class="even">
<td>ESP32*1</td>
<td>Breadboard*1</td>
<td>Temperature and Humidity Sensor*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/9232141f8a3166a8a6cdd43b78edd4e3.png" style="width:1.29722in;height:0.625in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/f1aed48e2c02214415853ad2358f3744.png" style="width:0.97569in;height:0.82431in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.275in;height:0.68264in" /></td>
</tr>
<tr class="even">
<td>LCD 128X32 DOT*1</td>
<td>M-F Dupont Wires</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/34bafe8113e2db36c8f0c8492b835474.png)

**Temperature and humidity sensor:** It is a temperature and humidity
composite sensor with calibrated digital signal output, its precision
humidity is±5%RH, temperature is±2℃, and range humidity is 20 to 90%RH,
and temperature is 0 to 50℃.

The temperature and humidity sensor applies to dedicated digital module
acquisition technology and temperature and humidity sensing technology
to ensure extremely high reliability and excellent long-term stability
of the product.

The sensor includes a resistive-type humidity measurement and an NTC
temperature measurement component, which is very suitable for
temperature and humidity measurement applications where accuracy and
real-time performance are not required.

The operating voltage is in the range of 3.3V to 5.5V.

The sensor has three pins, which are VCC、GND and S. S is the pin for
data output, which uses serial communication.

**Definition of Temperature and Humidity Sensor**

<table>
<tbody>
<tr class="odd">
<td><strong>Description</strong></td>
<td><strong>Definition</strong></td>
</tr>
<tr class="even">
<td>Start signal</td>
<td>Microprocessor pulls data bus (SDA) down at least 18ms for a period of time(Maximum is 30ms).</td>
</tr>
<tr class="odd">
<td>Response signal</td>
<td>The sensor pulls the data bus (SDA) low for 83µs, and then pulls up for 87µs to respond to the host's start signal.</td>
</tr>
<tr class="even">
<td>Humidity</td>
<td>The high humidity is an integer part of the humidity data, and the low humidity is a fractional part of the humidity data.</td>
</tr>
<tr class="odd">
<td>Temperature</td>
<td>The high temperature is the integer part of the temperature data, the low temperature is the fractional part of the temperature data. And the low temperature Bit8 is 1, indicating a negative temperature, otherwise, it is a positive temperature.</td>
</tr>
<tr class="even">
<td>Parity bit</td>
<td>Parity bit=humidity high bit+ humidity low bit+temperature high bit+temperature low bit</td>
</tr>
</tbody>
</table>

**Data Sequence Diagram**

When MCU sends a start signal, the temperature and humidity sensor
changes from the low-power-consumption mode to the high-speed mode.
After the start signal ends, the sensor sends a response signal of
40-bit data and triggers a signal acquisition, as shown below:

![](/media/933ac5e5a5e921d4b16c7c48091ba75a.png)

Combined with the code, you can understand better.

The temperature and humidity sensor can easily add temperature and
humidity data to your DIY electronic projects. It is perfect for remote
weather stations, home environmental control systems, and farms or
garden monitoring systems.

**Specification:**

Working voltage: +5V

Temperature range: 0°C to 50°C, error of ± 2°C

Humidity range: 20% to 90% RH,± 5% RH error

Digital interface

**Schematic Diagram**

![](/media/53fa034cbbcec22579b2bdf8252c90cd.emf)

4.  **Read the temperature and humidity values**

![](/media/5d6dd3f19b4323d212bb95e3e4d43743.png)

**How to add the xht11 library：**

This code uses a library named "**xht11**", if you haven't installed it
yet, please do so before learning. The steps to add third-party
libraries are as follows:

![](/media/de6bddbc7cb9b94dad6c75d4be235dc3.png)

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Temperature and Humidity Sensor</p>
<p>* Description : Use DHT11 to measure temperature and humidity.Print the result to the serial port.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "DHTesp.h"</p>
<p>DHTesp dht; //Define the DHT object</p>
<p>int dhtPin = 13;//Define the dht pin</p>
<p>void setup() </p>
<p>void loop() </p>
<p>Serial.println(" Temperature:" + String(newValues.temperature) + "C" +</p>
<p>" Humidity:" + String(newValues.humidity) + "%");</p>
<p>delay(1000);</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Compile and upload the code to ESP32, after the code is uploaded
successfully, power up with a USB cable, and open the serial monitor and
then set baud rate to 115200 and press the reset button first.

You will see the current temperature and humidity value detected by the
sensor from the serial monitor. As shown in the following figure:

![](/media/3a69e508620451442f1ec556f0820a65.png)

5.  **Wiring Diagram**

Now we start to print the values of the temperature and humidity sensor
with LCD\_128X32\_DOT, then we will see the corresponding values on it.
Please connect wires according to the following wiring diagram：

![](/media/6c82bb28bd1fcd7a1f72108e8a4a70b6.png)

6.  **Test Code**

Please add the "**xht11**" and **lcd128\_32\_io library first**, if you
haven't installed it yet, please do so before learning. The steps to add
third-party libraries are as follows:

![](/media/de6bddbc7cb9b94dad6c75d4be235dc3.png)

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Temperature Humidity Meter</p>
<p>* Description : LCD displays the value of temperature and humidity.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "DHTesp.h"</p>
<p>#include "lcd128_32_io.h"</p>
<p>DHTesp dht; //Define the DHT object</p>
<p>int dhtPin = 13; //Define the dht pin</p>
<p>lcd lcd(21, 22); //Create lCD128 *32 pin，sda-&gt;21， scl-&gt;22</p>
<p>void setup() </p>
<p>char string[10];</p>
<p>//lcd displays humidity and temperature values</p>
<p>void loop() </p>
<p>lcd.Cursor(0,0); //Set display position</p>
<p>lcd.Display("Temper:"); //Setting the display</p>
<p>lcd.Cursor(0,8);</p>
<p>lcd.DisplayNum(DHT.temperature);</p>
<p>lcd.Cursor(0,11);</p>
<p>lcd.Display("C");</p>
<p>lcd.Cursor(2,0);</p>
<p>lcd.Display("humid:");</p>
<p>lcd.Cursor(2,8);</p>
<p>lcd.DisplayNum(DHT.humidity);</p>
<p>lcd.Cursor(2,11);</p>
<p>lcd.Display("%");</p>
<p>delay(200);</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

**7.Test Result**

Compile and upload the code to ESP32, after the code is uploaded
successfully, power up with a USB cable and you will see that the LCD
128X32 DOT will display the value of the temperature and humidity
sensor.
