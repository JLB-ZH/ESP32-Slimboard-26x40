// =====================================================================
// a simple example that makes the 2 onboard leds blink asynchronously
// =====================================================================
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// on-board LEDs
#define LED_red 0   // GPIO0, active low
#define LED_green 2 // GPIO2, active high

// red LED blinking task
//----------------------------
void BlinkRedLedTask(void *pvParameters) {
const TickType_t xDelay = pdMS_TO_TICKS(500); // 500ms delay
  while (1) {
    ledON(LED_red);
    vTaskDelay(xDelay); // Delay for 500ms
    ledOFF(LED_red);
    vTaskDelay(xDelay); // Delay for 500ms
  }
}

// initialisation
//----------------
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_green, OUTPUT);  // this also disable the GPIO2 from beeing the Wifi status led
  ledOFF(LED_green);

  pinMode(LED_red, OUTPUT);
  ledOFF(LED_red);

  Serial.begin(115200);
  Serial.println("Start blinky task");
  xTaskCreate(BlinkRedLedTask, "blink_led_red", 2048, NULL, 1, NULL);
}

// main loop
//-----------
void loop() {
  ledON(LED_green);
  delay(100);
  ledOFF(LED_green);

  delay(900);
}

// functions
//------------
void ledON(int led) {
  if (led == LED_green)
  {
    Serial.println("LED_green ON");
    digitalWrite(led, HIGH);
  }
  else
  if (led == LED_red)
  {
    digitalWrite(led, LOW);
  }
}

void ledOFF(int led) {
  if (led == LED_green)
  {
    Serial.println("LED_green OFF");
    digitalWrite(led, LOW);
  }
  else
  if (led == LED_red)
  {
    digitalWrite(led, HIGH);
  }
}