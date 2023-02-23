cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(antLCD)

pico_sdk_init()

add_executable(antLCD
    main.c
    ant_lcd.c
)

pico_add_extra_outputs(antLCD)

target_link_libraries(antLCD pico_stdlib)
