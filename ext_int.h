#include "types.h"
// ext pins
#define E0 1   
#define E1 3  //14
#define E2 7  //15
//#define E3 20  //9
// channels
#define E0_CH 14
#define E1_CH 15
#define E2_CH 16
//#define E3_CH 17

// funs & isr s
void Int_Enable(void);
void get_dist(void);
void Window_disp(u8);
void Toggle_Gear(void)__irq;
void Window_Up(void)__irq;
void Window_Down(void)__irq;

#define LED_BUZ 22
