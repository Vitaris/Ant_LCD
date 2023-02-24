#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

#include "ant_lcd.h"

struct lcd_controller lcd_ctrl_0;
lcd_t lcd_0;

struct lcd_controller lcd_ctrl_1;
lcd_t lcd_1;

int main(){
    
    stdio_init_all();

    //Create a new LCD controller
    lcd_0 = lcd_create(&lcd_ctrl_0, 0, 1, 2, 3, 4, 5, 6, 16, 2);
    lcd_1 = lcd_create(&lcd_ctrl_1, 7, 8, 9, 10, 11, 12, 13, 16, 2);
    string2LCD(&lcd_ctrl_0, 0, 0, "LCD 0:");
    string2LCD(&lcd_ctrl_1, 0, 0, "LCD 1:");

    float i = 0.0;
    float j = 0.0;

    while (1) 
    {
        float2LCD(&lcd_ctrl_0, 0, 1, 12, i);
        float2LCD(&lcd_ctrl_1, 0, 1, 12, j);
        i += 0.1;
        j += 0.2;
    }
}
