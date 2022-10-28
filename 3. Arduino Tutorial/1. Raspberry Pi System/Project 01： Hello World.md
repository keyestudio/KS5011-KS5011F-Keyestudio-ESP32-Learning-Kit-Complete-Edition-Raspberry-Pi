## Project 01: Hello World

1.  **Introduction**

For ESP32 beginners, we will start with some simple things. In this
project, you only need a ESP32 mainboard, a USB cable and Raspberry Pi
to complete the "Hello World\!" project, which is a test of
communication between the ESP32 mainboard and the Raspberry Pi as well
as a primary project.

2.  **Components**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/56053f7126905c6def63919c661d5c0a.jpeg" style="width:1.56875in;height:0.76458in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS5011-KS5011F-Keyestudio-ESP32-Learning-Kit-Complete-Edition-Raspberry-Pi/master/media/3bdcc62cfa661d2b860a76e28537e21e.png" style="width:1.41667in;height:0.76042in" /></td>
</tr>
<tr class="even">
<td>ESP32*1</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Wiring Diagram**

In this project, we will use a USB cable to connect the ESP32 to
Raspberry Pi.

![](/media/56053f7126905c6def63919c661d5c0a.jpeg)

**4. Test Code**

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>* Filename : Hello World</p>
<p>* Description : Enter the letter R,and the serial port displays"Hello World".</p>
<p>* Auther :http//www.keyestudio.com</p>
<p>*/</p>
<p>char val;// defines variable "val"</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>}</p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading the project code to the ESP32，click“Tools”→“Board” and
select“ESP32 Wrover Module”.

![](/media/429f419dbd65a43087851e7d000376bf.png)

Select the correct serial port

![](/media/23a698888c3b02c80ae5c683deae6fe7.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the ESP32.

![](/media/4a4be2151f5fc1e5b6cb2c2469f95da1.png)

Note: If the uploading code fails, you can press and hold the Boot
button on the ESP32 after clicking![](/media/d09c4a31563f04a42d451e7bc1a5fb8a.png)and release the
Boot button after the percentage of uploading progress

appears.![](/media/dc77bfcf5851c8f43aab6cbe7cec7920.png), as shown below:  

![](/media/157ee2e7687559d9812d24edec758150.png)

The code is uploaded successfully

![](/media/45f79a7c39d425fca25c888d334a2031.png)

**5.Test Result**

After the code is uploaded successfully, click the
icon![](/media/2f6bca56f724e45a855335cb53ae9b4e.png)to enter the serial monitor. Set baud rate to
115200 and type "R" in the text box. Click "Send", and the serial
monitor will display "Hello World\!”.

Note: If “Hello World\!”is not displayed on the monitor, you need to
press the reset button on the ESP32 motherboard and repeat the above
operation. 

![](/media/9c034e622137bc43457ec0346286bde5.png)
