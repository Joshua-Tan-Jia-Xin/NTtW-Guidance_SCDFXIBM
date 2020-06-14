const int button = 3;       // button to simulate a fire alarm
const int buzzer = 6;       // buzzer to simulate a fire alarm ringing
const int Display = 8;      // Led to simulate dsplays on evavator
const int guidance = 7;      // Led to simulate guidance system
boolean state = false;
int val = 0;

void setup()
{
    pinMode(button, INPUT);     //set button as an INPUT device
    pinMode(Display, OUTPUT);   //set LED as an OUTPUT device
    pinMode(guidance, OUTPUT);   //set LED as an OUTPUT device
    pinMode(buzzer, OUTPUT);    //set buzzer as an OUTPUT device
}

void loop()
{
val = digitalRead(button);

if (val == HIGH)
   state = ! state;    //toggles the state turn LED on or off depending on the state
   if (state)
       {digitalWrite (Display, HIGH);
       digitalWrite (guidance, HIGH);
       digitalWrite (buzzer, HIGH);}
   else
       {digitalWrite (Display, LOW);
       digitalWrite (guidance, LOW);
       digitalWrite (buzzer, LOW);}
}
