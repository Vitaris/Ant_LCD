#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

#include "ant_lcd.h"

/*
Copyright (c) 2021, zadi15 (https://github.com/zadi15/)
License can be found at picoLCD/LICENSE
*/
struct lcd_controller lcd_ctrl_1;
lcd_t lcd_1;

int main(){
    
    stdio_init_all();

    //Create a new LCD controller
    lcd_1 = lcd_create(&lcd_ctrl_1, 0, 1, 2, 3, 4, 5, 6, 16, 2);
    writeText(&lcd_ctrl_1, "LCD created");
}
