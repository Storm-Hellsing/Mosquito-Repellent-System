int red_led = 4;
int green_led = 3;
int button = 2;

int speaker_all = 13;
int frequency = 31000;

void setup() 
{
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(speaker_all, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() 
{
  int button_state = digitalRead(button);

  if(button_state == 0)
  {
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);

    while(digitalRead(button) == 0)
    {
      tone(speaker_all, frequency, 0);
    }
    
    noTone(speaker_all);
  }
  else
  {
    digitalWrite(green_led, LOW);
    digitalWrite(red_led, HIGH);
  }
}
