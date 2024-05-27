int dotDelay =250;
int ledPin=13;
char* letters[]={
  ".--","-...","-.-.","-..",".","..-.","--.","....","..", //A-I
  ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.", //J-R
  "...","-","..-","...-",".--","-..-","-.--","--.." //S-Z
};
char* numbers[]={
  "-----",".----","..---","...--","....-",".....",//0-5
  "-....","--...","---..","----."//6-9
};

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char gh;
  if (Serial.available()>0)
  {
    ch=Serial.read();
    if (ch>= 'a' && ch <= 'z')
    {
      flashSequence(letters[ch-'a']);
    }
    else if (ch>= 'A' && ch <= 'Z')
    {
      flashSequence(letters[ch-'A']);
    }
    else if (ch>= '0' && ch <= '9')
    {
      flashSequence(letters[ch-'0']);
    }
    else if (ch==' ')
    {
      delay(dotDelay *4); //espacio entre palabras
    }
  }
}

void flashSequence(char* sequence)
{
  int i=0;
  while (sequence[i] != '\0')
  {
    (sequence[i]);
    i++;
  }
  delay(dotDelay*3); //espacio entre letras
}flashPuntoEspacio

void flashPuntoEspacio(char PuntoEspacio)
{
  digitalWrite(ledPin,HIGH);
  if(PuntoEspacio=='.')
  {
    delay(dotDelay);
  }
  else //a-
  {
    delay(dotDelay*3);
  }
  digitalWrite(ledPin,LOW);
  delay(dotDelay); //espacio entre parpadeo del led
}
