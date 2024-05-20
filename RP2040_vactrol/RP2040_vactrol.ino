// This Arduino program generates a PWM signal on the Raspberry Pi Pico.
// It varies the duty cycle of the PWM signal several times using a loop.

// Define the PWM output pins
const int pwmPin = 16; // Example pin, you can change it to any usable IO pin
const int pwmPin_base = 17;

void setup() {
  // Set the pinMode of the PWM pin to OUTPUT
  pinMode(pwmPin, OUTPUT);
  pinMode(pwmPin_base, OUTPUT);
}

void loop() {
  // Set base resistance value
  analogWrite(pwmPin_base, 127);
  
  // Vary the duty cycle several times using a loop
  
  // Increase the duty cycle from 0 to 255 in steps of 20
  for (int i = 0; i <= 255; i += 20) {
    analogWrite(pwmPin, i); // Set the PWM duty cycle
    delay(500); // Wait for 500 milliseconds
  }

  // Decrease the duty cycle from 255 to 0 in steps of 20
  for (int i = 255; i >= 0; i -= 20) {
    analogWrite(pwmPin, i); // Set the PWM duty cycle
    delay(500); // Wait for 500 milliseconds
  }
}
