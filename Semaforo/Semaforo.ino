// Projeto Semáforo utilizando Arduino UNO, LEDs e resistores. // Feito pelos alunos do projeto // sob orientação da professora Doutora Silvia Bertagnolli
// no Instituto Federal do Rio Grande do Sul Campus Porto Alegre

int ledVermelho = 12;
int ledAmarelo = 11; 
int ledVerde = 10;
void setup () {
// put your setup code here, to run once: 
pinMode (ledVermelho, OUTPUT);
pinMode (ledAmarelo, OUTPUT); 
pinMode (ledVerde, OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
digitalWrite(ledVerde, HIGH); 
delay(4000);
digitalWrite(ledVerde, LOW);
delay(10);
digitalWrite(ledAmarelo, HIGH); 
delay(1000);
digitalWrite(ledAmarelo, LOW);
delay(10);
digitalWrite(ledVermelho, HIGH); 
delay(6000);
digitalWrite(ledVermelho, LOW);
delay(10);
}
