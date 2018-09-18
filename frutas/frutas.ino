//#include <Keyboard.h>

#define C3 262 //131

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  //Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  long amostra = 0, media = 0, soma = 0;
  for (int i = 0; i <= 100; i++) {
    amostra = analogRead(A0);
    soma += amostra;
    delay(1);
  }
  media = soma / 100;
  Serial.println(media);
  if (media < 1020) {
    tone(2, C3);
    //Keyboard.print("q");
  }else {
    noTone(2);
  }
  delay(5);
}
