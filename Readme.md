<a name="Title" />
# Rocket Setup #

<a name="overview" />
## Overview ##

The compressed air rocket used here is based on the one presented by Make Magazine in **[How-to: Building a compressed air rocket launcher] (http://makezine.com/2010/07/11/how-to-building-the-compressed-air/)**

<a name="inventory" />
## Inventory ##

![00010-Inventory](images/00010-inventory.png?raw=true "Inventory")

1. Compression Chamber
2. Feet - Attached with Zip Ties
3. Springer Valve and Launch Tube
4. Shrader Valve to charge compression chamber
5. Bike Pump - Attaches to Shrader Valve
6. Paper & Tape Rocket
7. Manual Firing Button & 9v Power Supply
8. Spark Core & Relay Board

<a name="tasks" />
## Tasks  ##

1. [Assembling the Rocket](#Task1)
1. [Installing the Spark Core Driver and Command Line Interface](#Task2)
1. [Programming the Spark Core](#Task2)
1. [Configuring the Spark Core](#Task3)
1. [Testing the Spark Core](#Task4)

---

<a name="Task1" />
## Assembling the Rocket ##

1.  Attache the **Sprinkler Valve and Launch Tube** (3) to the **Compression Chamber** (2) using the using the threaded PVC tubing extending from the compression chamber and threading it into the bottom of the sprinkler valve. 

	> **Note:** Be sure that you have it threaded on tightly.  If need be use some plumbers tape to help ensure a good seal.  If the seal here is not good, air will lead out. 

1. **CAREFULLY** remove the cap with the button on it from the **"Manual Firing Button and 9v Power Supply"** by twisting it back and forth while pulling it away from the tube.  

1. Inside the tube, you should find the 9V Battery and the 9V battery connector.  Connect the battery to the snap connector, the re-insert the battery in the tube and replace the cap. 

	![01010-PushButtonBattery](images/01010-pushbuttonbattery.png?raw=true "Push Button Battery")

	![01015-AssembledTube](images/01015-assembledtube.png?raw=true "Assembled Tube")


1. You should now be able to push the pushbutton and hear the solenoid on the sprikler valve opening and closing (faintly).  If you hold your hand on the solendoid while you repeatedly push the button, you should also be able to feel the solenoid opening and closing. 

1. Attach the **Bike Pump** (5) to the **Shrader Valve** (4).  Again, ensure a good connection. 

1. You can now pump the bycicle pump (just a few times for this initial test): 
	- **WITHOUT A ROCKET** on the launch tube
	- Make sure to **STAY CLEAR OF THE LAUNCH TUBE**

1. **When you know it is safe to do so**, push the manual push button, and verify that air is released from the launch tube.  **Hold the push button down for five seconds to allow all of the air to escape.** 

1. Assuming everything has worked so far, if you have a rocket handy, and you just can't wait, go ahead and **SAFELY** try firing a rocket.  Remember, this is supposed to be a fun thing, not a weapon.  Please **DO NOT EVER AIM THE ROCKET AT SOMEBODY**. I have had MULTIPLE accidental misfires during my use of the rocket, and have been very lucky to have never injured anybody, but this can be dangerous, so please take care. 

1. Here is the final assembled rocket:

	![01020-AssembledRocket](images/01020-assembledrocket.png?raw=true "Assembled Rocket")

---

<a name="Task2" />
## Installing the Spark Core Driver and Command Line Interface ##

1. **Installing the Windows USB Driver** - Before you work with the Spark Core on a Windows Machine, you will need to install the Windows USB Driver.  

The steps covered here are specific to configuring a Spark Core using the Command Line Interface on a Windows machine. If you will be working with the spark core from a Mac or Linux box, you can can refer to the [online documentation](http://docs.spark.io/ "Spark.IO Documentation") for configuring a Spark Core. 

This documentation was written with the Spark-CLI version 0.4.1.  If you already have the Spark-CLI installed, you can determine its version using the following command:

`npm list -g spark-cli`

![02010-SparkCliVersion](images/02010-sparkcliversion.png?raw=true "SparkCliVersion")

In addition, you can always upgrade to the latest version of the Spark-CLI using the command: 

`npm update -g spark-cli`



 




<a name="Task2" />
## Programming the Spark Core ##

If your spark core has not been claimed, and programmed with the "relayWidget" sketch, you will first need to claim your Spark Core, and deploy the code to it.  

1. Follow the instructions to first [connect your core](http://docs.spark.io/connect/), and then to [claim your core](http://docs.spark.io/connect/#claiming-your-core)

1. Use the Spark.IO web UI to deploy the following code to your Spark: 

````C++
int relayPin[4] = {D0,D1,D2,D3};

int relayState[4] = {LOW,LOW,LOW,LOW};

void setup()
{
   //Initilize the relay control pins as output, and their state
   for(int r = 0; r <= 3; r++)
   {
       pinMode(relayPin[r], OUTPUT);
       digitalWrite(relayPin[r],relayState[r]);
   }

   //register the cycle relay function
   Spark.function("cycleRelay", cycleRelay);
   
   Serial.begin(9600);
}

void loop()
{
   // This loops for ever
}

int cycleRelay(String command)
{
    Serial.print("command: ");
    Serial.println(command);    
    //parse the relay number, minus 1 because pin #s start at 0
    int relayNumber = command.charAt(1) - '0' - 1;
    //do a sanity check, if we didn't get a good number, exit
    if(relayNumber < 0 || relayNumber > 3) {
      Serial.print("Relay # not good:");
      Serial.println(relayNumber);
      return -1;
    }
    
    Serial.print("Relay Number: ");
    Serial.println(relayNumber);
    
    //next, get the delay, if none, default to 100ms
    int pause=100;
    int comma = command.indexOf(',');
    if(comma > -1) {
      String pauseString = command.substring(comma+1, command.length());
      Serial.print("pauseString: ");
      Serial.println(pauseString);
      pause = pauseString.toInt(); 
    }
    

    Serial.print("comma: ");
    Serial.print(comma);
    Serial.print(" relay: ");
    Serial.print(relayNumber);
    Serial.print(" delay: ");
    Serial.println(pause);
    
    toggleRelay(relayNumber);
    delay(pause);
    toggleRelay(relayNumber);

    return 1;
}

void toggleRelay(int relay) {
    relayState[relay] = (relayState[relay] == HIGH) ? LOW : HIGH;
    digitalWrite(relayPin[relay],relayState[relay]);
}
````




---

<a name="Task3" />
## Configuring the Spark Core ##

1. Make sure that you have installed the Windows Driver for Spark Core: https://s3.amazonaws.com/spark-website/Spark.zip

1. Install the Spark Command Line tools [using these instructions](http://docs.spark.io/cli/)

1. Connect your Spark Core to your PC via USB

1. Ensure the Spark Core is in [Listening Mode](http://docs.spark.io/connect/) by pressing the **"MODE"** button for three seconds, until the led begins to flash blue.

1. From a command prompt, run **"spark setup wifi"** and follow the prompts to configure the WiFi connection you want the spark to use 

	> **Note:** Some MiFi adapters, and other networks take the user to a start screen on the first load.  If connecting to your mifi, the Spark might fail to connect the FIRST time.  Try cycling the power on your Spark Core to get it to restart and connect.  

	![03010-SparkSetupWifi](images/03010-sparksetupwifi.png?raw=true "spark setup wifi")

---

<a name="Task4" />
## Testing the Spark Core ##

---








