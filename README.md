# PCF8574-I2C-Alphanumeric-LCD-Module-Codevision-Library
easy to interface pcf8574 lcd backpack with codevision avr

Installation Guide : Copy this folders in Codevison installation path OR copy i2clcd.h to CodevisionInstallationPath/INC and i2clcd.lib in CodevisionInstallationPath/LIB

after copy you can use I2C lcd in your projects by add i2clcd.h in header section. #include <i2clcd.h>

Default I2C port is PORTC, SCL = PRTC0 & SDA = PORTC1 
you can change i2c port in <i2clcd.h>. it's very simple...

PCF8574 Default Address is 0x4E ( A0-A1-A2 is Pull-up ) you can change address in <i2clcd.lib>

Now you just need use "lcd_init();" in main function. then you can use lcd_clear(),lcd_putchar(),lcd_puts(),lcd_gotoxy(),lcd_backlightoff(),lcd_backlighton(),lcd_backlighttoggle().

if you have any question contact diginic@mail.com OR hamidi@mail.com.

Goodluck ;)

