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

--- 

<a name="tasks" />
## Tasks  ##

1. [Assembling the Rocket](#Task1)
1. [Installing the Spark Core Windows USB Driver](#Task2)
1. [Installing the Spark-CLI](#Task3)
1. [Configuring WiFi for a Pre-Programmed Spark Core](#Task4)
1. [Flashing the relayWidget Sketch](#Task5)
1. [Identifying your Spark Core](#Task6)
1. [Testing the Spark Core](#Task6)

---

<a name="Task1" />
## Assembling the Rocket ##

1.  Attach the **Sprinkler Valve and Launch Tube** (3) to the **Compression Chamber** (2) using the using the threaded PVC tubing extending from the compression chamber and threading it into the bottom of the sprinkler valve. 

	> **Note:** Be sure that you have it threaded on tightly.  If need be use some plumbers tape to help ensure a good seal.  If the seal here is not good, air will lead out. 

1. **CAREFULLY** remove the cap with the button on it from the **"Manual Firing Button and 9v Power Supply"** by twisting it back and forth while pulling it away from the tube.  

1. Inside the tube, you should find the 9V Battery and the 9V battery connector.  Connect the battery to the snap connector, the re-insert the battery in the tube and replace the cap. 

	> **Note:** The 9V battery in the push button tube is what actually supplies the power for the sprinkler valve solenoid.  If you make sure to only have the battery connected when you are actively using the rocket, it should last for a very long time.  If you find that the Solenoid does not open when you push the button, you may try replacing the 9V battery in the tube. 

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
## Installing the Spark Core Windows USB Driver ##

### <span style="color: #090">IF YOU ALREADY HAVE THE WINDOWS USB DRIVER INSTALLED YOU CAN SKIP THIS TASK</span> ###

The steps covered here are specific to configuring a Spark Core using the Command Line Interface on a Windows machine. If you will be working with the spark core from a Mac or Linux box, you can can refer to the [online documentation](http://docs.spark.io/ "Spark.IO Documentation") for configuring a Spark Core. 

1. Before you work with the Spark Core on a Windows Machine, you will need to install the Windows USB Driver.  First, you'll need to download the driver from https://s3.amazonaws.com/spark-website/Spark.zip . Download the .zip file and extract it to a folder on your computer.  

	> **Note:** You can also refer to the documentation for [Connecting to the Spark Core via USB](http://docs.spark.io/connect/#connecting-your-core-connect-over-usb)

1. Connect the Spark Core to your computer via the USB, and ensure that the Spark Core is in **"[Listening Mode](http://docs.spark.io/connect/#connecting-your-core-listening-mode)"** by confirming that the RGB LED on the board is flashing blue.  If it isn't, [hold the **"MODE"** button on the Spark Core for about three seconds until it begins flashing](https://vine.co/v/hFHlpBDELeU):

	![02005-ListeningMode](images/02005-listeningmode.png?raw=true "Listening Mode")


1. Open your computer's **"Device Manager"**.  Under **"Other Devices"** you should see the **"Spark Core with WiFi"**.  Right click on the **"Spark Core with WiFi"** and select **"Update Driver Software..."** from the pop-up menu: 

	![02010-SparkInOtherDevices](images/02010-sparkinotherdevices.png?raw=true "Spark in Other Devices")

1. Select the "Browse my computer for driver software option":

	![02020-Browse](images/02020-browse.png?raw=true "Browse")

1. Then browse to the folder where you extracted the Spark.zip file you downloaded previously with the Windows USB driver.  (There should be a **spark_core.inf** and **spark_core.cat** file in the folder), then click **"Next"**:

	![02030-SparkDriverFolder](images/02030-sparkdriverfolder.png?raw=true "Spark Driver Folder")

1. In the **"Windows Security"** window, click **"Install"** to install the driver:

	![02040-Install](images/02040-install.png?raw=true "Install")

1. You should see a confirmation that the **"Spark Core with Wifi and Arduino Compatability"** driver was installed.  Click **"Close"** to close the window. 

	![02050-DriverInstalled](images/02050-driverinstalled.png?raw=true "Driver Installed")

1. Finally, back in the **"Device Manager"** you should see the Spark Core listed under **"Ports"**:

	![02060-SparkOnComPort](images/02060-sparkoncomport.png?raw=true "Spark Core on COM Port")

1. At this point, if you were to use a terminal program (Like [PuTTY](http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html)) you could connect to the Spark Core via serial and issue [some commands](http://docs.spark.io/connect/#connecting-your-core-connect-over-usb).  However, the Spark Command Line Interfac e (Spark-CLI) offers significantly more functionality, so we'll use that.  

---

<a name="Task3" />
## Installing the Spark-CLI ##

The Spark Command Line Interface (Spark-CLI) is a Node.js application that allows you to manage your spark cores, and the code that runs on them.  The Spark-CLI source is available from GitHub at https://github.com/spark/spark-cli and you can read the docs here: http://docs.spark.io/cli/

1.  First, ensure that you have Node.js installed.  You can install it from here: http://nodejs.org/

	> **Note:** It helps if you let the installer install the Node Package Manager (npm) as well as to add Node to the system path.  If you add node the path, you can use node from any Windows Command Prompt. 

1. To install the Spark-CLI using node, you can open a Node.js Command Prompt (or any command administrator prompt if you allowed the Node.js installer to add Node to the path) and issue the following command:

	`npm install -g spark-cli`

	![03010-InstallSparkCLI](images/03010-installsparkcli.png?raw=true "Install Spark-CLI")

1. This documentation was written with the Spark-CLI version 0.4.1.  If you already have the Spark-CLI installed, you can determine its version using the following command:

	`npm list -g spark-cli`

	![03020-SparkCliVersion](images/03020-sparkcliversion.png?raw=true "SparkCliVersion")

1. In addition, you can always upgrade to the latest version of the Spark-CLI using the command: 

	`npm update -g spark-cli`

---

<a name="Task4" />
## Configuring WiFi for a Pre-Programmed Spark Core ##

<span style="color: #900; font-weight: bold">IF YOU ARE ADDING YOUR OWN SPARK CORE, OR NEED TO RE-PROGRAM AN EXISTING SPARK CORE, SKIP THIS STEP AND GO TO [Programming a new Spark Core](#Task5)</span>

If you received a rocket, with a Spark Core that has been pre-programmed, a Relay Board, and everything already connected, you only need to configure the Spark Core to connect to your local WiFi.

1. Connect the Spark Core to your PC via USB, and place the Spark Core into **"[Listening Mode](http://docs.spark.io/connect/#connecting-your-core-listening-mode)"** by holding down the **"Mode"** button on the spark core until the RGB LED flashes blue. 

1. Open a Node Command Prompt, and issue the following command 

	`spark setup wifi`

1. Follow the prompts to configure the Spark Core for your WiFi network.  


	> **Note:** Some MiFi wifi hot sports (like my Verizon MiFi), and other networks take the user to a start screen on the first load.  If connecting to your mifi, the Spark might fail to connect the first time.  Try cycling the power on your Spark Core to get it to restart and connect.  If the WiFi network you are connecting to requires a browser based authentication process, you won't be able to connect your Spark Core to it.  You must know the WiFi SSID, Security Mode, and Password.  

	![04010-SparkSetupWifi](images/04010-sparksetupwifi.png?raw=true "spark setup wifi")

1. When the WiFi setup is complete, you should see the RGB LED on the Spark Core "Breathing Cyan".  This means that [it should have a cyan color (light blue) and should repeatedly fade in and out.](https://vine.co/v/OmOAlMg17Y9) 

---

<a name="Task5" />
## Flashing the relayWidget Sketch ##


<span style="color: #090; font-weight: bold">If your spark core is already programmed with the relayWidget Sketch, you can skip this step</span>

<span style="color: #900; font-weight: bold">If your Spark Core has not been "claimed", you need to do that first.</span> 

<span style="color: #900; font-weight: bold">If the Spark Core you want to program has already been claimed by another account, you will have to have that account owner remove the core before you can claim it:</span>

`spark core remove <core name / core id>`

<span style="color: #900; font-weight: bold">If your Spark Core is new, or is available to be claimed you can use the Spark-CLI commands:</span>

```
spark cloud login
spark setup
```

<span style="color: #900; font-weight: bold">You can find the instructions for connecting and claiming a core here: http://docs.spark.io/connect/</span>

The **"relayWidget"** sketch (app) we use below is used to drive a Spark Core that is connected to a Spark [Relay Shield](http://docs.spark.io/shields/#relay-shield).  The relay shield makes it simple for a single Spark Core to control up to four other circuits.  In our case, with the rocket, we only need a single circuit.  We'll use the first relay (connected to digital pin D0) to override the manual push-button switch on our compressed air rocket.  We connect the **"Common"** (COMM) and **"Normaly Open"** (NO) ports on the first relay accross the swtich.  Then we we use the Spark Core to drive the pin (D0) HIGH, it "closes" the switch, which supplies the voltage to the solenoid on the Sprinkler Valve and launches the rocket.  Cool! 

Our relayWidget sketch publishes a single function called **"cycleRelay"** via the Spark cloud.  The **"cycleRelay"** function is used to toggle the state of a relay, pause for a given time, then toggle it back.  We'll use that to turn the relay "on" for a time, then back off (so it is ready to fire again).  The cycleRelay takes a single string argument in the form of "r#,delay" where "#" is the relay number (1,2,3,4), and "delay" is the number of milliseconds to wait before toggeling the state back.  We want to send a "command" string of "r1,5000" to toggle the state first relay on (really D0), wait for five seconds, then toggle it back off. 

You could use this sketch to control anything connected to the relay board, and you could publish other functions that turn relays on or off specifically, rather than just cycling them from off to on and back off again. 

1. Login to the [Spark Build](https://www.spark.io/login) web development environment with your Spark.IO credentials (the same credentials you used to claim your Spark Core): https://www.spark.io/login 

1. If this isn't your first sketch, click the **"CREATE NEW APP"** button:

	![05010-CreateNewApp](images/05010-createnewapp.png?raw=true "Create New App Button")

1. When prompted, enter **"relayWidget"** as the name for your new app:

	![05020-CreateRelayWidget](images/05020-createrelaywidget.png?raw=true "Create relayWidget app")

	> **Note:** You can also get this code from the [relayWidget.ino](./relayWidget/relayWidget.ino) code file

	> **Note:** although the sketch has a **.ino** extension, you ***can't compile and deploy*** this to the Spark Core using the Arduino IDE.  You need to use either the Spark web interface, or the [Spark-CLI](http://docs.spark.io/cli) to compile and flash this code onto your Spark Core.  

1. Paste the following code into the code window:

	````C++
	int relayPin[4] = {D0,D1,D2,D3};
	int builtinLed = D7;

	int relayState[4] = {LOW,LOW,LOW,LOW};

	void setup()
	{
		//Initilize the relay control pins as output, and their state
		for(int r = 0; r <= 3; r++)
		{
			 pinMode(relayPin[r], OUTPUT);
			 digitalWrite(relayPin[r],relayState[r]);
		}
		
		//Setup the builtinLed for output
		pinMode(builtinLed,OUTPUT);
		//and make sure it is off...
		digitalWrite(builtinLed, LOW);

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
		 //Toggle the builtin LED on the board as well
		 //This is just to help somebody test their Spark Core
		 //if it isn't currently connected to a Relay Board
		 digitalWrite(builtinLed,relayState[relay]);
	}
	````

1. Click the **"Save"** button (looks like a folder, dont' ask me why) to save the sketch:

	![05030-SaveSketch](images/05030-savesketch.png?raw=true "Save Sketch")

1. You can then **"Verify"** your sketch:

	![05040-Verify](images/05040-verify.png?raw=true "Verify Code")

1. If you have claimed multiple cores with your account, make sure that the correct Spark Core is set as the target, by choosing the **"Cores"** option along the left, then clicking on the **"Star"** icon next to the core you want to flash: 

	![05050-SelectCore](images/05050-selectcore.png?raw=true "Select Core")

1. Finally, you can flash the code to your core: 

	![05060-FlashCore](images/05060-flashcore.png?raw=true "Flash Core")

1. You know your core is ready when it is once again "[breathing cyan](https://vine.co/v/OmOAlMg17Y9)".

---

<a name="Task6" />
## Identifying your Spark Core ##

<span style="color: #900; font-weight: bold">If the Spark Caore you are using has been claimed by another account, you will need that account owner to supply you with your device's Core ID and Access Token</span>

Before you can call the cycleRelay function on your Spark Core, you need to know 

- The Spark Core's Core ID
- The Access Token for your account

We'll walk through finding both of those here.

1. You can determine your Spark Core's Core ID using the Spark-CLI if it is connected to your PC and "breathing cyan" by issuing the following commands: 

	```
	spark cloud login
	spark cloud list
	```

	![06010-SparkList](images/06010-sparklist.png?raw=true "Spark List")

1. You can also determine your Spark Core's ID from the [Spark Build](https://www.spark.io/login) web interface.  Login to [Spark Build](https://www.spark.io/login), and from the **"Cores"** page, click on the arrow next to your core to see it's Core ID:

	![06020-SparkCoreIDInSparkBuild](images/06020-sparkcoreidinsparkbuild.png?raw=true "Spark Core Device ID in Spark Build")

1. Your access token can also be retrieved from the Spark Build web interface.  Click on the **"Settings"** link, and copy your Access Token from there: 

	> **Note:** Access Tokens expire every 90 days, so you will need to occasionally update the Access Token in your client.  You can learn more about access tokens here: http://docs.spark.io/api/#spark-cloud-api-authentication

	![06030-AccessToken](images/06030-accesstoken.png?raw=true "Access Token")
---

<a name="Task7" />
## Testing the Spark Core ##

Ok, if you got this far it is assumed that you have a Spark Core connected to a Relay Sheild that is properly wired into the compressed air rocket launcher. You can now disconnect the Spark Core from your computer (disconnect the USB cable), and power it instead from a 9V battery connected to the Relay Shield:



---








