#define R1 10E3

int thermistor1_reading;
int thermistor2_reading;

float thermistor1_vout;
float thermistor2_vout;

float thermistor1_resistance;
float thermistor2_resistance;

float temperature1;
float temperature2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //initialize our analog input pins
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
thermistor1_reading = analogRead(A0);
thermistor2_reading = analogRead(A1);
  
//TODO: convert the readings (valued 0-4095) to voltage values between 0-3.3
thermistor1_vout = 3.3; //YOUR CODE HERE
thermistor2_vout = 3.3; //YOUR CODE HERE

//TODO: calculate the resistance across each thermistor.  feel free to add extra lines as needed
//use the variable R1 as our known R1 resistance value, 3.3 as our known input voltage, and the measured output voltage you just calculated
thermistor1_resistance = R1; //YOUR CODE HERE
thermistor2_resistance = R1; //YOUR CODE HERE

//TODO: measure the temperature across both thermistors
//use the Steinhart-Hart equation as explained in the pset 
//make sure to convert from kelvin to celsius!!!!!!!! 273.15 Kelvin = 0 Celsius
temperature1 = 25.0; //YOUR CODE HERE
temperature2 = 25.0; //YOUR CODE HERE

Serial.print("thermistor1 temperature: ");
Serial.print(temperature1);
Serial.print(", thermistor2 temperature: ");
Serial.println(temperature2);

}
