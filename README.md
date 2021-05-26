# home_automation
#### Here's a simple reference guide for 'Wireless Home Automation using Android'.
#### A small *'cheap but proffessional project'* we did in college which doesn't require any coding knowledge whatsoever.
>Here we will be using **'Arduino'** and building a **'Simple App'** (*Don't panic if you are new or don't know coding as this requires minimal to no experience in it*)
>
>Cheap as in you'll see this project can befinished with as low as $10
>
>This is just a *Template/Guide* & I expect you to build over it and get **creative**. I'm open for any any suggession or contributions. Let's begin...

Presented here is a home automation project using a simple Android app, which you can use to control electrical appliances with clicks or voice commands. Commands are sent via Bluetooth to Arduino Uno. So you need not get up to switch on or switch off the device while watching a movie or doing some work.

## Prerequisites/Things you will need- (all are easily available in local outlets or online shopping platforms)
>1. **An Arduino UNO Board**
>
> `Arduino is an open source electronics prototyping platform based on flexible, easy-to-use hardware and software. It is intended for artists, designers, hobbyists and anyone interested in creating interactive objects or environments.Arduino Uno is based on ATmega328 microcontroller (MCU). It consists of 14 digital input/output pins, six analogue inputs, a USB connection for programming the onboard MCU, a power jack, an ICSP header and a reset button. It is operated with a 16MHz crystal oscillator and contains everything needed to support the MCU. It is very easy to use as you simply need to connect it to a computer using a USB cable, or power it with an AC-to-DC adapter or battery to get started. The MCU onboard is programmed in Arduino programming language using Arduino IDE`

>2. **A Bluetooth or WI-Fi Module** (here we'll use an **HC-05 Bluetooth** Module)
>
> `Bluetooth module used in this project is HC-05 (Fig. 4), which supports master and slave mode serial communication (9600-115200 bps) SPP and UART interface. Using these features it can communicate with other Bluetooth-enabled devices like mobile phones, tablets and laptops. The module runs on 3.3V to 5V power supply`

>3. **A Relay Module** (We are using a 3 channel relay,you can use any channel realy depending on the no. of appliances you need to control)
>
> `A relay allows you to turn on or turn off a circuit using voltage and/or current much higher than what Arduino could handle. Relay provides complete isolation between the low-voltage circuit on Arduino side and the high-voltage side controlling the load. It gets activated using 5V from Arduino, which, in turn, controls electrical appliances like fans, lights and air-conditioners. An 8-channel relay module is shown in Fig. 5.`

>4. 12V DC Adaptor/Power source
>
>`Here we used a Charger/USB to power Arduino board`


>5. Some **Jumper Wires** `For Connecting components with Arduino I/O`

## Connection Details
>In this home automation project circuit, Pins 10 and 11 of Arduino are connected to pins TXD and RXD of the Bluetooth module, respectively, as shown in Fig. 6.
>Pins Gnd and Vcc of the Bluetooth module are connected to Gnd and +3.3V of Arduino board respectively. Pins 2, 3 and 4 are connected to the three relays (RL1, RL2 and RL3) of the relay board. Pins Vin and Gnd of the relay board are connected to pins Vin and Gnd of Arduino board respectively.



## Software
>The software program for the home automation project(homeautomation.ino) is written in Arduino programming language called *Processing*. Arduino Uno is programmed using Arduino IDE software that you can download from arduino.cc. I've provided the `.ino` file in the Assets folder of this repository
>
> MIT App Inventor software was used to create the Android app (.apk) for this project. refer link here


>The app on your smartphone sends data when you click on buttons or feed voice commands via Bluetooth in the mobile to Bluetooth module HC-05 connected with Arduino board. Received data pin TXD of the HC-05 is connected to Arduino. Arduino Uno processes the received data and controls the relay board accordingly.

Procedure for installing the Android app (.apk) is as follows:
1. Download the app (homeautomation.apk).
2. Run .apk file. It will prompt you to complete the action. Click Package Installer and then Install.
3. You will also need a voice-recognition app on your Android smartphone. Most smartphones have this app preinstalled. If you do not have it, download one from Google Play Store.

Download source folder: click here



Now you must be thinking
To build the application


## Construction and testing
>Assemble the circuit as shown in the circuit diagram. Open Arduino IDE and compile the program (sketch). Upload the sketch (homeautomation.ino) to Arduino board. Switch on the power supply to Arduino by connecting it to 12V power source. Pair Bluetooth module with your Android phone. Type password ‘1234’ (default password) of Bluetooth module.

Click Bluetooth Image on the app to connect it with the Bluetooth module. It automatically connects and displays as Connected in the app.

You are now ready to control the appliances using the app. You can either use on/off buttons or voice commands to control the appliances. You can control more electrical appliances by increasing the number of channels in the relay. For instance, using an 8-channel relay, you can control up to eight devices. For this, you need to alter the source code by adding input commands and voice commands to control the devices.
