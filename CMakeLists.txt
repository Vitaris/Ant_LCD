cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(antLCD)

pico_sdk_init()

add_executable(antLCD
    main.c
    ant_lcd.c
)

# enable usb output, disable uart output
pico_enable_stdio_usb(antLCD 1)
pico_enable_stdio_uart(antLCD 0)

pico_enable_stdio_usb(antLCD 1)
pico_enable_stdio_uart(antLCD 1)

pico_add_extra_outputs(antLCD)

target_link_libraries(antLCD pico_stdlib)
