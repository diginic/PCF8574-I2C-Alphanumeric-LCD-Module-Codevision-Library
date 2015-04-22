#include <i2c.h>
#asm
    .equ __sda_bit=1
	.equ __scl_bit=0     
    //.equ __i2c_port=0x1b ;PORTA
   //.equ __i2c_port=0x18 ;PORTB
   .equ __i2c_port=0x15 ;PORTC
   //.equ __i2c_port=0x12 ;PORT
#endasm

#pragma used+
unsigned char lcd_write(unsigned char data);
void lcd_reset(void);
void lcd_cmd (char cmd);
void lcd_init (void);
void lcd_data (unsigned char dat);
void lcd_putchar(char c);
void lcd_puts(char *a);
void lcd_clear(void);
void lcd_gotoxy(unsigned char x, unsigned char y);
void lcd_backlightoff(void);
void lcd_backlighton(void);
void lcd_backlighttoggle(void);
#pragma used-

#pragma library i2clcd.lib
