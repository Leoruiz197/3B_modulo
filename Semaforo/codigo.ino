const int led_verde_1 = 2;
const int led_amarelo_1 = 3;
const int led_vermelho_1 = 4;
const int led_verde_p_1 = 5;
const int led_vermelho_p_1 = 6;

const int led_verde_2 = 8;
const int led_amarelo_2 = 9;
const int led_vermelho_2 = 10;
const int led_verde_p_2 = 11;
const int led_vermelho_p_2 = 12;

 void setup()
 {  
   pinMode(led_verde_1, OUTPUT);
   pinMode(led_amarelo_1, OUTPUT);
   pinMode(led_vermelho_1, OUTPUT);
   pinMode(led_verde_p_1, OUTPUT);
   pinMode(led_vermelho_p_1, OUTPUT);
   
   pinMode(led_verde_2, OUTPUT);
   pinMode(led_amarelo_2, OUTPUT);
   pinMode(led_vermelho_2, OUTPUT);
   pinMode(led_verde_p_2, OUTPUT);
   pinMode(led_vermelho_p_2, OUTPUT);
   Serial.begin(9600); 
 }
 
void loop()
 {
  digitalWrite(led_verde_1, HIGH);
  digitalWrite(led_vermelho_p_1, HIGH);
  digitalWrite(led_vermelho_2, HIGH);
  digitalWrite(led_verde_p_2, HIGH);
  delay(2000);
  
  digitalWrite(led_verde_1, LOW);
  digitalWrite(led_verde_p_2, LOW);
  piscar(led_amarelo_1,led_vermelho_p_2, 5);
  
  digitalWrite(led_vermelho_1, HIGH);
  digitalWrite(led_verde_p_1, HIGH);
  digitalWrite(led_verde_2, HIGH);
  digitalWrite(led_vermelho_p_2, HIGH);
  digitalWrite(led_vermelho_2, LOW);
  digitalWrite(led_vermelho_p_1, LOW);
  delay(2000);
  
  digitalWrite(led_verde_2, LOW);
  digitalWrite(led_verde_p_1, LOW);
  piscar(led_amarelo_2,led_vermelho_p_1, 5);
  digitalWrite(led_vermelho_1, LOW);
  digitalWrite(led_vermelho_p_2, LOW);
 }
void piscar(int led1,int led2,int piscadas){
  for(int x=0; x < piscadas; x++){
    digitalWrite(led1, HIGH);
  	digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
  	digitalWrite(led2, LOW);
    delay(1000);
  }
}
