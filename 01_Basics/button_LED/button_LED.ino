const int ledPin = 18;
const int buttonPin = 19;

/*void setup(){
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP); 
}

code below creates a circuit where the LED is only on so long as the button is pressed. 

void loop(){
    int buttonState = digitalRead(buttonPin); /* digitalRead that will return HIGH (3.3 V) or LOW (0 V), and
    we store that result inside a vartiable "buttonState". */

    /* INPUT_PULLUP mode on a microcontroller pin connects an internal resistor to the voltage supply. 
    with an open button (not pressed), the internal resistor will pull the the pin to HIGH. 
    when the button is closed (pressed), it reads LOW. button logic here is inverted. */

    /*if (buttonState == LOW)
        digitalWrite(ledPin, HIGH); // button is pressed, so set ledPin to high. 
    else
        digitalWrite(ledPin, LOW); // button is not pressed, so set ledPin to low.
    
}
*/



/* code below created a circuit introduces states, where we can press the button once and keep the LED on, and
press it again to turn it off.*/


//using boolean data types, first establish the LED as off (false).
bool ledState = false;

/* now we need to make sure our program remembers what it was doing during our previous loop. using INPUT_PULLUP,
HIGH = button released, LOW = button pressed. so the button starts in a released state, and we initialize it
to high. */

int previousButtonState = HIGH;

void setup(){
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP); 
}

void loop(){
    int currentButtonState = digitalRead(buttonPin); // read the state of button rn

    // check if button was JUST pressed. 

    // if previous state = HIGH and its current state is low, then the button was just pressed, so we need to flip the led State.

    if(previousButtonState == HIGH && currentButtonState == LOW){
        ledState = !ledState;

    //rewrite LED to match LED state

        digitalWrite(ledPin, ledState);
    }


    // save the current button state. on the next loop, this is our "previous" state.

    previousButtonState = currentButtonState;
}





















