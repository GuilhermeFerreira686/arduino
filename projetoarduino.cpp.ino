const int analogInPin = A0;         // Pino analógico que o sensor está conectado
const int digitalPin = 2;
const int analogInPin1 = A1;
const int acionamento = 0;

int sensorValue = 0;                     // valor que será lido do sensor

int setpoint = 200;                      // Este valor deverá ser alterado de acordo com a intensidade de
// luz desejada.                      

void setup() {
  Serial.begin(9600);                    // inicializa a comunicação serial com a taxa de 9600 bps
  pinMode(digitalPin, OUTPUT);
  pinMode(analogInPin1,INPUT);
}

void loop() {
 
  sensorValue = analogRead(analogInPin); // Faz a leitura do pino analógico
 
  Serial.print("sensor = " );            // Imprime o resultado no monitor serial
  Serial.println(sensorValue);      
 
  if(sensorValue < setpoint){
    digitalWrite(2,HIGH);
  } else {
    digitalWrite(2,LOW);
digitalWrite(digitalPin, LOW);
 
  }

  delay(2);                              // Aguarda 2 milisegundos para estabilizar o conversor ADC                  
}

  
