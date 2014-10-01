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


