#include <reg51.h>

sbit MQ2_DOUT = P3^0;  // Digital output from MQ2
sbit BUZZER   = P2^0;  // Buzzer output

void main() {
    BUZZER = 0; // Turn off buzzer initially

    while(1) {
        if (MQ2_DOUT == 0) {   // LOW means gas detected
            BUZZER = 1;        // Turn on buzzer
        } else {
            BUZZER = 0;        // No gas - buzzer off
        }
    }
}
