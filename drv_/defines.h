/*
 * defines.h
 *
 * Created: 7/12/2017 5:16:44 PM
 *  Author: rafa
 */ 

#define  F_CPU 16000000UL
//#define BAUD 9600UL
#define BAUD 57600UL
#define MY_UBRR (F_CPU/16/BAUD-1)

#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#define pinChangeHigh(reg, pin) (reg|=(1<<pin))
#define pinChangeLow(reg, pin)  (reg&=~(1<<pin))

#define MPU6050_WRITE (0x68<<1) 
#define MPU6050_READ ((0x68<<1)|1)
#define SINE_TABLE_SZ 255

#define HS_U OCR2A //pin11
#define HS_V OCR0A //pin6
//#define HS_V OCR2B //pin 3
#define HS_W OCR0B //pin5


#define HS_U_HIGH	sbi(PORTB,4);//pin 10
#define HS_U_LOW	cbi(PORTB,4);
#define HS_V_HIGH	sbi(PORTB,5);//pin 11
#define HS_V_LOW	cbi(PORTB,5);
#define HS_W_HIGH	sbi(PORTB,6);//pin 12
#define HS_W_LOW	cbi(PORTB,6);

#define HS_U_INVERSE (PORTB^=(1<<4))
#define HS_V_INVERSE (PORTB^=(1<<5))
#define HS_W_INVERSE (PORTB^=(1<<6))

#define LS_U_HIGH sbi(PORTH,4)
#define LS_V_HIGH sbi(PORTH,5) 
#define LS_W_HIGH sbi(PORTH,6) 
#define LS_U_LOW cbi(PORTH,4)
#define LS_V_LOW cbi(PORTH,5)
#define LS_W_LOW cbi(PORTH,6)

#ifndef MPU6050_GETATTITUDE
	#define MPU6050_GETATTITUDE 2
#endif
//_delay_us();
//EN1 = LS_U	digital 7 PORTD ^= (1<<7);
//EN2 = LS_V	digital 8 PORTB ^=(1<<0);
//EN3 = LS_W 	digital 2 PORTD ^=(1<<2);
//#define LS_U_HIGH (PORTD|=(1<<7))
//#define LS_U_LOW (PORTD&=~(1<<7))
//
//#define LS_V_HIGH (PORTB|=(1<<0))
//#define LS_V_LOW (PORTB&=~(1<<0))
//
//#define LS_W_HIGH (PORTD|=(1<<2))
//#define LS_W_LOW (PORTD&=~(1<<2))