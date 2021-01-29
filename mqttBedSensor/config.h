
// Wifi Settings
#define SSID                          "wifi-SSID"
#define PASSWORD                      "wifi-PASSWORD"

// MQTT Settings
#define HOSTNAME                      "bed-sensor"
#define MQTT_SERVER                   "mqtt-broker-ip"
#define STATE_TOPIC                   "bed"
#define STATE_RAW_TOPIC               "bed/raw"
#define AVAILABILITY_TOPIC            "bed/available"
#define TARE_TOPIC                    "bed/tare"
#define mqtt_username                 "mqtt-user"
#define mqtt_password                 "mqtt-password"

// HX711 Pins
const int LOADCELL_DOUT_PIN = 2; // Remember these are ESP GPIO pins, they are not the physical pins on the board.
const int LOADCELL_SCK_PIN = 3;
int calibration_factor = 21000; // Defines calibration factor we'll use for calibrating.
