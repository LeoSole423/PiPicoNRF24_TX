#include <stdio.h>
#include "pico/stdlib.h"


int main(){
    const uint led_pin = 25;

    //Initialize LED pin
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    //Initialize chose serial port
    stdio_init_all();

    //Loop forever

    while(1){
        printf("Blinking!\r\n");
        //blink led
        gpio_put(led_pin, true);
        sleep_ms(1000);
        gpio_put(led_pin,false);
        sleep_ms(1000);
    }

}