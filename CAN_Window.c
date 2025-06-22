#include <LPC21XX.H>
#include "types.h"
#include "delay.h"
#include "can.h"
#define LEDS   0
// ALL LEDS ON INDICATES WINDOW IS CLOSED
int main() {
	CANF RxF;
	//u16 i;
	Init_CAN1();
	IOSET0=0xFF<<LEDS;
	IODIR0=0xFF<<LEDS;
	while(1) {
		CAN1_Rx(&RxF);
		if(RxF.ID==2)/* for(i=0;i<9;i++)*/{
			switch((u16)RxF.Data[0]) {
				case 0:IOCLR0=0xFF<<LEDS;
					IOSET0=0xFF<<LEDS;
					break;
				case 1:IOCLR0=0xFF<<LEDS;
					IOSET0=0xFE<<LEDS;
					break;
				case 2:IOCLR0=0xFF<<LEDS;
					IOSET0=0xFC<<LEDS;
					break;
				case 3:IOCLR0=0xFF<<LEDS;
					IOSET0=0xF8<<LEDS;
					break;
				case 4:IOCLR0=0xFF<<LEDS;
					IOSET0=0xF0<<LEDS;
					break;
				case 5:IOCLR0=0xFF<<LEDS;
					IOSET0=0xE0<<LEDS;
					break;
				case 6:IOCLR0=0xFF<<LEDS;
					IOSET0=0xC0<<LEDS;
					break;
				case 7:IOCLR0=0xFF<<LEDS;
					IOSET0=0x80<<LEDS;
					break;
				case 8:IOCLR0=0xFF<<LEDS;
					IOSET0=0x00<<LEDS;
					break;
			}
		}
	}
}
