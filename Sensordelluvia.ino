const int rainSensorPin = 2; // Pin del sensor de lluvia
const int buzzerPin = 13;    // Pin del buzzer
const int ledPin = 4;        // Pin del LED

void setup() {
  pinMode(rainSensorPin, INPUT); // Configura el sensor como entrada
  pinMode(buzzerPin, OUTPUT);    // Configura el buzzer como salida
  pinMode(ledPin, OUTPUT);       // Configura el LED como salida
  Serial.begin(9600);            // Inicializa la comunicación serial
}

void loop() {
  int rainSensorValue = digitalRead(rainSensorPin); // Lee el sensor de lluvia

  if (rainSensorValue == HIGH) { // Si detecta lluvia
    digitalWrite(buzzerPin, HIGH); // Activa el buzzer
    digitalWrite(ledPin, HIGH);    // Enciende el LED
  } else { // Si no detecta lluvia
    digitalWrite(buzzerPin, LOW);  // Desactiva el buzzer
    digitalWrite(ledPin, LOW);     // Apaga el LED
  }

  Serial.println(rainSensorValue); // Imprime el valor leído
  delay(1000); // Espera 1 segundo antes de repetir
}
