<a name="Title" />
# Compressed Air Rocket and Spark Core Setup #

<a name="overview" />
## Overview ##

The compressed air rocket used here is based on the one presented by Make Magazine in **[How-to: Building a compressed air rocket launcher] (http://makezine.com/2010/07/11/how-to-building-the-compressed-air/)**

You can make your own rockets using a legal sheet of paper, some napkins (to add support to the nose cone), and copious amounts of tape.  Get the template here: [Rocket_Template.pdf](Rocket_Template.pdf?raw=true)

There is an alternate set of instructions for the rocket launcher with more complete instructions on creating the paper rockets here: http://cdn.makezine.com/make/2010/04/compressedairrocket.pdf .  A copy of the PDF is also included in this repository here: [compressedairrocket.pdf](compressedairrocket.pdf?raw=true)

---

<a name="BuildInfo" />
## Build Your Own ##

These docs were originally written to help somebody configure the rocket launcher that was shipped to them.  However, there is only one in existence right now so if you wait to have it shipped to you, you may be waiting a while, and you can't keep it for long.  

Building one is not hard, is great to do with kids or really any group.  

1. Follow the instructions to create your own rocket launcher:
	- [How-to: Building a compressed air rocket launcher] (http://makezine.com/2010/07/11/how-to-building-the-compressed-air/) 
	- Alternate instructions: [compressedairrocket.pdf](compressedairrocket.pdf?raw=true)
	- PDF Template for Paper Rockets: [Rocket_Template.pdf](Rocket_Template.pdf?raw=true)

1. Get a [Spark Core](https://www.spark.io/store) (The one with the chip attenna is fine for most use cases.  If you will be using this outside far away from your WiFi hotspot, you may prefer the one with the ufl connector so you can attach an external antenna for extended range. 

1. Get a Spark Core [Relay Shield](https://www.spark.io/store) 

1. Additional misc parts:

	- Project enclosure for the Spark Relay Sheild, Spark Core, and 9V Battery (I used a sandwich container from the dollar store! High class huh!)

	- Optional On/Off switch for the Spark Core (to help save the battery when you aren't using it)

	- Wire to connect the Spark Core

- An Adventerous attitude is required.  You will likely need to "invent" a few things as you build your own system.  If I get to where I can spec out exact parts and process I will, but then that would take some of the fun out of building your own version. 

	



---

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

The following schematic gives you the basics of the eletronics although the schematic isn't exact.  It was built in [Fritzing](fritizing.org) and there is not current a fritzing part for the Spark IO Relay Shield, so the connections have been approximated here:

![00005-Fritzing](images/00005-fritzing.png?raw=true "Fritzing")

--- 

<a name="tasks" />
## Tasks  ##

1. [Assembling the Rocket Launcher](#Task1)
1. [Installing the Spark Core Windows USB Driver](#Task2)
1. [Installing the Spark-CLI](#Task3)
1. [Configuring WiFi for a Pre-Programmed Spark Core](#Task4)
1. [Flashing the relayWidget Sketch](#Task5)
1. [Identifying your Spark Core](#Task6)
1. [Testing the Spark Core](#Task7)
1. [Using Visual Studio to Create a Launcher Web Site](#Task8)
1. [Publishing your Web Site to Azure](#Task9)

---

<a name="Task1" />
## Assembling the Rocket Launcher ##

1.  Attach the **Sprinkler Valve and Launch Tube** (3) to the **Compression Chamber** (2) using the using the threaded PVC tubing extending from the compression chamber and threading it into the bottom of the sprinkler valve. 

	> **Note:** Be sure that you have it threaded on tightly.  If need be use some plumbers tape to help ensure a good seal.  If the seal here is not good, air will lead out. 

1. **CAREFULLY** remove the cap with the button on it from the **"Manual Firing Button and 9v Power Supply"** by twisting it back and forth while pulling it away from the tube. 

	> **Note:** If you are using my rocket, I just improved the connections inside the tube so you don't have to be AS CAREFUL, but you don't want to the yank the cap off and break the connections.

1. Inside the tube, you should find the 9V Battery and the 9V battery connector.  Connect the battery to the snap connector, the re-insert the battery in the tube and replace the cap. 

	> **Note:** The 9V battery in the push button tube is what actually supplies the power for the sprinkler valve solenoid.  If you make sure to only have the battery connected when you are actively using the rocket, it should last for a very long time.  If you find that the Solenoid does not open when you push the button, you may try replacing the 9V battery in the tube. 

	![01010-PushButtonBattery](images/01010-pushbuttonbattery.png?raw=true "Push Button Battery")

	![01015-AssembledTube](images/01015-assembledtube.png?raw=true "Assembled Tube")


1. I added some disconnects between the sprinkler valve and the manual push button and spark core relay board assemblies.  This makes it easier to disconnect them for shipping.

	![01016-DisconnectsDisconnected](images/01016-disconnectsdisconnected.png?raw=true "Disconnects Disconnected")

1. Simply re-connect them if they are disconnected.  ***It doesn't matter which black wire connects to which white wire.  Either way is fine.*** 

	![01017-DisconnectsConnected](images/01017-disconnectsconnected.png?raw=true "Disconnects Connected")

1. You should now be able to push the pushbutton and hear the solenoid on the sprikler valve opening and closing (faintly).  If you hold your hand on the solendoid while you repeatedly push the button, you should also be able to feel the solenoid opening and closing. 

1. Attach the **Bike Pump** (5) to the **Shrader Valve** (4).  Again, ensure a good connection. 

1. You can now pump the bycicle pump (just a few times for this initial test): 
	- **WITHOUT A ROCKET** on the launch tube
	- Make sure to **STAY CLEAR OF THE LAUNCH TUBE**

1. **When you know it is safe to do so**, push the manual push button, and verify that air is released from the launch tube.  **Hold the push button down for five seconds to allow all of the air to escape.** 

1. Assuming everything has worked so far, if you have a rocket handy, and you just can't wait, go ahead and **SAFELY** try firing a rocket.  Remember, this is supposed to be a fun thing, not a weapon.  Please **DO NOT EVER AIM THE ROCKET AT SOMEBODY**. I have had MULTIPLE accidental misfires during my use of the rocket, and have been very lucky to have never injured anybody, but this can be dangerous, so please take care. 

	You can aim the rocket by rotating the compression chamber.  If the zip ties are too loose you can tighten them up to add enough friction to keep the compression chamber in place after "aiming"

1. Here is the final assembled rocket launcher:

	![01020-AssembledRocket](images/01020-assembledrocket.png?raw=true "Assembled Rocket")

---

<a name="Task2" />
## Installing the Spark Core Windows USB Driver ##

### <span style="color: #090">IF YOU ALREADY HAVE THE WINDOWS USB DRIVER INSTALLED YOU CAN SKIP THIS TASK</span> ###

The steps covered here are specific to configuring a Spark Core using the Command Line Interface on a Windows machine. If you will be working with the spark core from a Mac or Linux box, you can can refer to the [online documentation](http://docs.spark.io/ "Spark.IO Documentation") for configuring a Spark Core. 

1. Before you work with the Spark Core on a Windows Machine, you will need to install the Windows USB Driver.  First, you'll need to download the driver from https://s3.amazonaws.com/spark-website/Spark.zip . Download the .zip file and extract it to a folder on your computer.  

	> **Note:** You can also refer to the documentation for [Connecting to the Spark Core via USB](http://docs.spark.io/connect/#connecting-your-core-connect-over-usb)

1. Connect the Spark Core to your computer via the USB, and ensure that the Spark Core is in **["Listening Mode"](http://docs.spark.io/connect/#connecting-your-core-listening-mode)** by confirming that the RGB LED on the board is flashing blue.  If it isn't, [hold the **"MODE"** button on the Spark Core for about three seconds until it begins flashing](https://vine.co/v/hFHlpBDELeU):

	![02005-ListeningMode](images/02005-listeningmode.png?raw=true "Listening Mode")


1. Open your computer's **"Device Manager"**.  Under **"Other Devices"** you should see the **"Spark Core with WiFi"**.  Right click on the **"Spark Core with WiFi"** and select **"Update Driver Software..."** from the pop-up menu: 

	![02010-SparkInOtherDevices](images/02010-sparkinotherdevices.png?raw=true "Spark in Other Devices")

1. Select the **"Browse my computer for driver software"** option:

	![02020-Browse](images/02020-browse.png?raw=true "Browse")

1. Then browse to the folder where you extracted the Spark.zip file you downloaded previously with the Windows USB driver.  (There should be a **spark_core.inf** and **spark_core.cat** file in the folder), then click **"Next"**:

	![02030-SparkDriverFolder](images/02030-sparkdriverfolder.png?raw=true "Spark Driver Folder")

1. In the **"Windows Security"** window, click **"Install"** to install the driver:

	![02040-Install](images/02040-install.png?raw=true "Install")

1. You should see a confirmation that the **"Spark Core with Wifi and Arduino Compatability"** driver was installed.  Click **"Close"** to close the window. 

	![02050-DriverInstalled](images/02050-driverinstalled.png?raw=true "Driver Installed")

1. Finally, back in the **"Device Manager"** you should see the Spark Core listed under **"Ports"**:

	![02060-SparkOnComPort](images/02060-sparkoncomport.png?raw=true "Spark Core on COM Port")

1. At this point, if you were to use a terminal program (Like [PuTTY](http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html)) you could connect serially to the Spark Core via the COM port listed (COM4 in this case) and issue [some commands](http://docs.spark.io/connect/#connecting-your-core-connect-over-usb).  However, the Spark Command Line Interface (Spark-CLI) offers significantly more functionality, so we'll use that.  

---

<a name="Task3" />
## Installing the Spark-CLI ##

### <span style="color: #090">IF YOU ALREADY HAVE THE LATEST VERSION OF THE SPARK-CLI INSTALLED YOU CAN SKIP THIS TASK</span> ###

The S**park Command Line Interface (Spark-CLI)** is a **Node.js** application that allows you to manage your spark cores, and the code that runs on them.  The Spark-CLI source is available from GitHub at https://github.com/spark/spark-cli and you can read the docs here: http://docs.spark.io/cli/

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

### <span style="color: #900; font-weight: bold">IF YOU ARE ADDING YOUR OWN SPARK CORE, OR NEED TO RE-PROGRAM AN EXISTING SPARK CORE, SKIP THIS STEP AND GO TO [Flashing the relayWidget Sketch](#Task5)</span> ###

If you received the rocket launcher, with a Spark Core that has been pre-programmed, a Relay Board, and everything already connected, you only need to configure the Spark Core to connect to your local WiFi.

1. Connect the Spark Core to your PC via USB, and place the Spark Core into **"[Listening Mode](http://docs.spark.io/connect/#connecting-your-core-listening-mode)"** by holding down the **"Mode"** button on the spark core until the RGB LED flashes blue repeatedly.

1. Open a Node Command Prompt, and issue the following command 

	`spark setup wifi`

1. Follow the prompts to configure the Spark Core for your WiFi network.  


	> **Note:** Some MiFi wifi hot sports (like my Verizon MiFi), and other networks take the user to a start screen on the first load.  If connecting to your mifi, the Spark might fail to connect the first time.  Try cycling the power on your Spark Core to get it to restart and connect.  If the WiFi network you are connecting to requires a browser based authentication process, you won't be able to connect your Spark Core to it.  You must know the WiFi SSID, Security Mode, and Password.  

	![04010-SparkSetupWifi](images/04010-sparksetupwifi.png?raw=true "spark setup wifi")

1. When the WiFi setup is complete, you should see the RGB LED on the Spark Core "Breathing Cyan".  This means that [it should have a cyan color (light blue) and should repeatedly fade in and out.](https://vine.co/v/OmOAlMg17Y9) 

---

<a name="Task5" />
## Flashing the relayWidget Sketch ##


### <span style="color: #090; font-weight: bold">If your spark core is already programmed with the relayWidget Sketch, you can skip this step</span> ###

<span style="color: #900; font-weight: bold">If your Spark Core has not been "claimed", you need to do that first.</span> 

<span style="color: #900; font-weight: bold">If the Spark Core you want to claim has already been claimed by another account, you will have to have that account owner remove the core before you can claim it:</span>

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

Ok, if you got this far it is assumed that you have a Spark Core connected to a Relay Sheild that is properly wired into the compressed air rocket launcher. You can now disconnect the Spark Core from your computer (disconnect the USB cable), and power it instead from a 9V battery connected to the Relay Shield.  

We will be using the [Spark REST api](http://docs.spark.io/api) to call the **"cycleRelay"** function published by the **"relayWidget"** app we flashed onto the Spark Core.  

The REST API requires that all reqests include the **"Access Token"** for the account that the spark belongs to, as well as the Spark Core's device ID.  Use the instructions in the [Identifying your Spark Core](#Task6) section to retrieve those values if needed. 

Cycle relay takes a single **"command"** string argument in the form of:

`r#,<delay>`

where `#` is the relay number (1-4) and `<delay>` is the number of milliseconds to pause between relay states.  

For example, the following command string toggles relay 1 (`r1`) from off to on, pauses for five seconds (`5000` ms) then toggles the relay state from on back to off:

`r1,5000`

You can call the **"cycleRelay"** function on the spark a number of ways:

- Spark-CLI
- Curl
- A REST Client Tool
- A custom app

We will cover the first three here, and leave the custom app implementation up to you.


1. Connect the 9V battery to the snap connector in the Spark / Relay Shield Box, then turn on the power switch to power the Spark and the Relay Shield:

	> **Note:** This battery powers just the Spark Core and the Relays on the Relay Shield.  The 9V battery in the manual push-button tube is still needed to power the solenoid on the Sprinker Valve.  As before, if you keep this battery connected only when you are actually using the Rocket, the battery should last a long time.  However, be prepared to replace the battery if needed. 



	![07010-ConnectBattery](images/07010-connectbattery.png?raw=true "Connect Battery")

1. When testing the **"cycleRelay"** function, there are two ways you can tell if it is working:

	- If the little LED next to the USB port on the Spark Core turns blue.  This mimicks the relay state and allows you to test the app even if the Spark Core isn't connected to the Relay Shield

	- The LED above the corresponding relay on the relay shield lights up when the relay is activated.  

	![07015-VisualIndicators](images/07015-visualindicators.png?raw=true "Visual Indicators")

1. To use the Spark-CLI to call the cycleRelay function on your Spark Core first make sure you are logged in via the Spark CLI:

	`spark cloud login`

	Then run either:

	`spark call <deviceid> cycleRelay r1,5000`

	or 

	`spark call <core name> cycleRelay r1,5000`

	for example:

	![07020-SparkCLICall](images/07020-sparkclicall.png?raw=true "Spark-CLI Calls")

	> **Note:** you can change the `r1,5000` parameters to toggle a different relay for a different duration

1. You can also use [curl](http://curl.haxx.se/download.html) to test your spark using the following format:

	`curl https://api.spark.io/v1/devices/<core id>/cycleRelay -k -d access_token=<access token> -d params=r1,5000`

	For example:

	![07030-CurlCall](images/07030-curlcal.png?raw=true "Curl Call")

	> **Note:** Again, you can modify the `r1,5000' value above to cycle a different relay for a different duration

1. You can also use a REST test client like the ["Advanced Rest Client" app for Chrome](http://chromerestclient.appspot.com/)

	![07040-AdvancedRestClient](images/07040-advancedrestclient.png?raw=true "Advanced REST Client")

1. To create a custom app (A Windows or Windows Phone App, Web App, iOS, Android, etc) you can read up on the [Spark REST api](http://docs.spark.io/api) and implement your client code accordingly.

1. Once you have a test working reliably, you can now SAFELY charge the compression chamber with the bike pump, place a rocket on the launcher and go for it! 
	
	<span style="color: #900; font-weight: bold">Be careful not to over pressurize the chamber.  For an "indoor" demo you want relatively low pressure.  Outdoors, you can increase it.  Start low, test, and increase as needed.</span>

---

<a name="Task8" />
# Using Visual Studio to Create a Launcher Web Site #

Now that you know that you can launch the rocket using the REST API, you can really write any kind of app you want to launch the rocket.  It could be a phone app, a desktop app, a web site, whatever. In this step, we'll create a simple web site (really, just a web page) using **Visual Studio Community Edition**.  

1. If you don't have Visual Studio Community Edition, you can get a copy from [visualstudio.com](http://visualstudio.com).  You can also use Visual Studio Express for Web 2013, or another full version of Visual Studio 2013 if you already have them.  Make sure to also install the latest Azure SDK from http://azure.microsoft.com/en-us/downloads/ . We'll assume you are using Visual Studio 2013 Community Edition. 

1. In the Visual Studio window, from the menu bar, select **"File"** | **"New"** | **"Web Site..."** :

	![08010-FileNewWebSite](images/08010-filenewwebsite.png?raw=true "File New Web Site")

1. Then, in the **"New Web Site"** window, select **"Visual C#"**, **"ASP.NET Empty Web Site"**, and then specify the file system path to the folder where you want to create the web site:

	![08020-NewWebSiteWindow](images/08020-newwebsitewindow.png?raw=true "New Web Site Window")

1. In the Visual Studio **"Solution Explorer"** window, right click on the name of your web site, and select **"Add"** | **"Add New Item..."** from the pop-up menu:

	![08030-AddNewItemMenu](images/08030-addnewitemmenu.png?raw=true "Add New Item Menu")

1. In the **"Add New Item"** window, select **"HTML Page"**, then give the file the name **"index.html"** and click **"Add"**:

	![08040-AddIndexHtml](images/08040-addindexhtml.png?raw=true "Add index.html")

1. Replace the entire contents of the new index.html file with the following code:

	> **Note:** You can also copy the contents from the [RocketWeb/index.html](./RocketWeb/index.html) file

	````HTML
	<!DOCTYPE html>
	<html lang="en">
	<head>
	  <meta charset="utf-8">
	  <meta http-equiv="X-UA-Compatible" content="IE=edge">
	  <meta name="viewport" content="width=device-width, initial-scale=1">
	  <meta name="description" content="">
	  <meta name="author" content="">
	  <link rel="icon" href="../../favicon.ico">

	  <title>Rocket Launcher</title>

	  <!-- Bootstrap core CSS --><!-- Latest compiled and minified CSS -->
	  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/css/bootstrap.min.css">
	  <!-- Bootstrap theme --><!-- Optional theme -->
	  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/css/bootstrap-theme.min.css">

	  <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
	  <!--[if lt IE 9]>
		 <script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
		 <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
	  <![endif]-->

	  <style type="text/css">
		 /* start the alerts out as hidden */
		 .alert {
			display: none;
		 }
	  </style>
	</head>

	<body role="document">

	  <div class="container theme-showcase" role="main">

		 <!-- Main jumbotron for a primary marketing message or call to action -->
		 <div class="jumbotron">
			<h1>Rocket Launcher</h1>
			<p>
			  Use this page to launch your rocket!  Refer to the documentation at <a href="http://github.com/dxdisrupt/rocket" target="_blank">http://github.com/dxdisrupt/rocket</a> for more information!
			</p>
			<p>
			  <a class="btn btn-primary btn-lg" role="button" href="http://github.com/dxdisrupt/rocket" target="_blank">Learn more &raquo;</a>
			</p>
		 </div>

		 <!-- This is the Launch button.  We'll click this to launch the rocket.
				It's click event handler get's wired up in the document.onready
				function below -->
		 <p>
			<button id="buttonLaunch" type="button" class="btn btn-block btn-lg btn-danger">LAUNCH</button>
		 </p>

		 <!-- These divs are used to give feed back to the user while the rocket is launching or 
				based on the success or failure of the launch  -->
		 <div id="alertInfo" class="alert alert-info" role="alert">
			<strong>LAUNCHING ROCKET!</strong> This will take about five seconds if everything works right, or up to thirty seconds if there is a problem. Please wait....
		 </div>

		 <div id="alertSuccess" class="alert alert-success" role="alert">
			<strong>CONGRATULATIONS!</strong>: Your rocket should be flying high!
		 </div>

		 <div id="alertFailure" class="alert alert-danger" role="alert">
			<strong>EPIC FAIL!</strong>: Something went wrong.  Make sure that you updated the Spark Core ID and Access Token in the source code, and that the Spark Core is on and breathing cyan.
		 </div>



	  </div> <!-- /container -->
	  <!-- Bootstrap core JavaScript
	  ================================================== -->
	  <!-- Placed at the end of the document so the pages load faster -->
	  <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
	  <!-- Latest compiled and minified JavaScript -->
	  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/js/bootstrap.min.js"></script>
	  <script src="../../assets/js/docs.min.js"></script>
	  <!-- IE10 viewport hack for Surface/desktop Windows 8 bug -->
	  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/js/ie10-viewport-bug-workaround.min.js"></script>

	  <script>

		 $(document).ready(function () {
			//wire up the button click event handler
			$('#buttonLaunch').click(function () {
			  //When the user clicks the button, call the launch method (defined below)
			  launch();
			});
		 });

		 //This function uses jQuery's ajax functionality to call the Spark Core REST API
		 //and launch the rocket. Make sure to update the coreId and accessToken variables
		 //with your values...
		 launch = function () {
			
			/*
			!!!!!!!!!!!!!!!!!!!! IMPORTANT !!!!!!!!!!!!!!!!!!!!

			You need to update the coreId and accessToken variables with your Spark Core's 
			Core ID and your account's Access Token. Refer to the following link if you 
			need help finding those values: 
			https://github.com/dxdisrupt/rocket#Task6
			*/
			var coreId = "PUT YOUR CORE ID HERE";
			var accessToken = "PUT YOUR ACCESS TOKEN HERE";

			//This builds the URL to the REST API endpoint for the cycleRelay function 
			//with your given coreId
			var url = "https://api.spark.io/v1/devices/" + coreId + "/cycleRelay";

			//Turn on the alertInfo div to show the user that the rocket launch is being attempted
			showAlerts("info");

			//Make the Ajax Call
			$.ajax({
			  type: "POST",
			  url: url,
			  data: {
				 access_token: accessToken,
				 args: "r1,5000" //Fires relay 1 for 5 seconds to make sure all the air exits the launcher
			  },
			  complete: function (jqxhr, status) {
				 //Figure out if the call was successful or not
				 //The cycleRelay function should return a value of 1 if all was well
				 //If we got anything else back, it failed. Use that knowledge to show
				 //the appropriate alert div.
				 var success = false;
				 if (jqxhr.responseJSON.return_value === 1) {
					showAlerts("success");
				 } else {
					showAlerts("failure");
				 }
			  }
			});
		 };

		 //This uses the state argument values "info","success","failure" or "none"
		 //to determine which of the alert divs (if any) to hide or show.
		 showAlerts = function (state) {
			switch (state) {
			  case "info":
				 $('#alertInfo').show();
				 $('#alertSuccess').hide();
				 $('#alertFailure').hide();
				 break;
			  case "success":
				 $('#alertInfo').hide();
				 $('#alertSuccess').show();
				 $('#alertFailure').hide();
				 break;
			  case "failure":
				 $('#alertInfo').hide();
				 $('#alertSuccess').hide();
				 $('#alertFailure').show();
				 break;
			  case "none":
			  default:
				 $('#alertInfo').hide();
				 $('#alertSuccess').hide();
				 $('#alertFailure').hide();
				 break;
			}
		 };

	  </script>
	</body>
	</html>
	````


1. Next, you need to replace some code in the file. On lines 102 and 103 (or thereabouts), you need to update the `coreId` and `accessToken` variables with the appropriate values for your Spark Core. For example, the Core ID and Access token used above would change: 

	![08050-PlaceHolders](images/08050-placeholders.png?raw=true "Place Holders")

	with

	![08060-ReplacedValues](images/08060-replacedvalues.png?raw=true "Replaced Values")

1. Now, from the Visual Studio toolbar clic the **"Save All"** button (if you are prompted for a location to save your .sln file, accept the default, or choose a path you prefer), then click the **"Debug"** button to debug the site in the browser:

	![08070-DebugInBrowser](images/08070-debuginbrowser.png?raw=true "Debug In Browser")

1. The page should open in the browser:

	![08080-PageInBrowser](images/08080-pageinbrowser.png?raw=true "Page in Browser")

1. Before launching, make sure that:

	- you properly updated the `coreId` and `accessToken` variables as just described
	- your spark core is powered on and breathing cyan
	- you may NOT want the rocket actually on the launcher, you can verify that the site is working just by viewing the LEDs on the relay board.  It is up to you.

1. When you are ready, click the **"LAUNCH"** button, and verify that the info message is displayed:

	> **Note:** Watch the LED above your relay on the relay board to verify that it is activating.  Of course, if you had the launcher charged, and a rocket ready to launch, it should have launched now.  

	![08090-InfoAlert](images/08090-infoalert.png?raw=true "Info Alert")

1. Assuming everything worked, the success alert message should be shown:

	![08100-SuccessAlert](images/08100-successalert.png?raw=true "Success Alert")

1. Or if there were any problems, the failure alert will display:

	- Verify the `coreId` and `accessToken` variable values
	- Ensure that the Spark Core is powered on and breathing cyan
	- Ensure that you properly flashed the relayWidget app to the Spark Core

	![08110-FailureAlert](images/08110-failurealert.png?raw=true "Failure Alert")

---

<a name="Task9" />
## Publishing your Web Site to Azure ##

Cool, we are now launching the rocket from a web page, but it the page is running on our local development workstation.  If we'd like to be able to use that web page to fire the rocket from mobile device, or from anywhere else in the world, we need to get the web site up where people can access it from the Internet.  One of the easiest ways to do that is with an Azure Web Site.  

> **Note:** In order to do this task, you will need a current, valid Azure subscription.  If you don't have one, you can create a free trial account at http://azure.microsoft.com 

1. Ensure that the web site is open in Visual Studio

1. In the **"Solution Explorer"** window, right click on the name of your web site, and select **"Publis Web Site"** from the pop-up menu:

	![09010-PublishWebSiteMenu](images/09010-publishwebsitemenu.png?raw=true "Publish Web Site Menu Item")

1. In the **"Publish Web"** window, select **"Microsoft Azure Web Sites"**:

	![09020-SelectAzureWebSites](images/09020-selectazurewebsites.png?raw=true "Select Azure Web Sites")

1. If you aren't already signed into your Azure account, click the **"Sign In..."** button, and when prompted, enter the credentials associated with the Azure subscription you want to use:

	![09030-SignInIfNeeded](images/09030-signinifneeded.png?raw=true "Sign In if Needed")

1. Once you are signed in, click the **"New..."** button to create a new Azure Web Site (or if you have already created the site you want to deploy to, you can select it from the drop-down list):

	![09040-NewButton](images/09040-newbutton.png?raw=true "New Button")

1. In the **"Create site on Microsoft Azure"** window, complete the fields, and click **"Create"**

	- **Site name** must be a unique host name.
	- **Subscription** should be the subscription you want to use
	- **Region** should be a region near you
	- **Database server** should be **No database** (this site doesn't use one)

	![09050-CreateNewWebSite](images/09050-createnewwebsite.png?raw=true "Create New Web Site")

1. On the **Publish Web"** page, accept the defaults (Visual Studio got these straight from Azure, so they should be correct), and click the **"Publish"** button:

	![09060-Publish](images/09060-publish.png?raw=true "Publish")

1. Back in Visual Studio, you can monitor your publish progress in the **"Output"** and **"Web Publish Activity"** windows:

	![09070-OutputWindow](images/09070-outputwindow.png?raw=true "Output Window")

	![09080-WebPublishActivity](images/09080-webpublishactivity.png?raw=true "Web Publish Activity Window")

1. As long as the publish process completes successfully though, your new Azure Web Site should open in the browser:

	![09090-SiteInAzure](images/09090-siteinazure.png?raw=true "Site in Azure")

1.  You should now be able to open that site from anywhere, and use it to launch your rocket! So cool! For example, here it is running on a Windows Phone:

	![09100-OnWindowsPhone](images/09100-onwindowsphone.png?raw=true "On Windows Phone!")

---

<a name="summary" />
## Summary ##

The Compressed Air Rocket Launcher and Spark Core is a great way to engage kids, friends, family, and even large audiences.  Everybody loves to see the rocket launch, and the construction, electronics and code are actually all pretty simple!  

Have fun!  






