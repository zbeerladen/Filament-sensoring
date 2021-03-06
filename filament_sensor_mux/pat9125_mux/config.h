#ifndef CONFIG_H
#define CONFIG_H
//pat setting
#define ADR 0x75
#define XRES 240
#define YRES 240
//
#define UNIT_COUNT 6
#define USED 6
//
//finda setting
#define FINDA_PIN0 4
#define FINDA_PIN1 5
#define FINDA_PIN2 6
#define FINDA_PIN3 7
#define FINDA_PIN4 8
#define FINDA_PIN5 9
//
#define INVERSE_FINDA false
#define PULLUP_FINDA true
//serial setup
#define SERIAL_SPEED 115200
//
#define DIAG_LED_PIN 14
#define MODE_PIN     15
#define MAX485_RS_DE 15
#define TCA9548A_RST 10 
#endif
