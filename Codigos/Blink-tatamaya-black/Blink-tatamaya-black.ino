

int ledPin1 = 31;  //LED AZUL NODEMCU GPIO2
int ledPin2 = 33;  //LED laranja wroombee
int ledPin3 = 35;  // ligado ao led azul wroombee
//int ledPin = 32 ;  // ligado ao led vermelho wroombee
//int timer = 2000;
//int timer2 = 500;
//int timerlaranja=1000;
//int timer3 = 200;


//sensor ultrasonico

//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
//Define os pinos para o trigger e echo
#define pino_trigger 12
#define pino_echo 13
#define buzzer    7
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);

// fim ultrasonico

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    Serial.begin(115200);
    pinMode(buzzer, OUTPUT);
}

void loop()
{
    //Serial.println("Hello world, I am Wroombee-EngeBOT!");
    

 // ------sensor ultrasonico

//Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  //inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);

   if (cmMsec < 5){
          
         // digitalWrite(ledPin3, LOW);
          digitalWrite(buzzer, HIGH);

    int timer = 5000;
    int timer2 = 500;
    int timerlaranja=1000;
    int timer3 = 200;
    int timerver = 1000;
    digitalWrite(ledPin1, HIGH);
    delay(timer);
    digitalWrite(ledPin1, LOW);
    delay(timer2);

    digitalWrite(ledPin2, HIGH); // led laranja
    delay(timerlaranja);
    digitalWrite(ledPin2, LOW);
    delay(timer3);

    digitalWrite(ledPin3, HIGH);  //led vermelho
    delay(timerver);
    digitalWrite(ledPin3, LOW);
    delay(timer2);



          
          }
          else{
            
           // digitalWrite(ledPin3, HIGH);
            digitalWrite(buzzer, LOW);
           digitalWrite(ledPin1, HIGH);
    int timer = 1000;
    int timer2 = 500;
    int timerlaranja=1000;
    int timer3 = 200;
    digitalWrite(ledPin1, HIGH);
    delay(timer);
    digitalWrite(ledPin1, LOW);
    delay(timer2);

    digitalWrite(ledPin2, HIGH); // led laranja
    delay(timerlaranja);
    digitalWrite(ledPin2, LOW);
    delay(timer3);

    digitalWrite(ledPin3, HIGH);  //led vermelho
    delay(timer);
    digitalWrite(ledPin3, LOW);
    delay(timer2);


            
          }

  
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
   Serial.println(cmMsec);
 // Serial.print(" - Distancia em polegadas: ");
 // Serial.println(inMsec);
  delay(100);

 // ------fim ultrasonico

    
    
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                





