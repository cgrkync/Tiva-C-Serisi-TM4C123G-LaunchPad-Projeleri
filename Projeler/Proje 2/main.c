#include"inc/tm4c123gh6pm.h"
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/interrupt.h"
#include "inc/hw_gpio.h"
#include "inc/hw_ints.h"
#include "inc/hw_sysctl.h"
#include "lcd.h"
#include "driverlib/interrupt.h"
#include "driverlib/sysctl.c"
#include "driverlib/timer.h"
#include "driverlib/timer.c"

void timerIntSet(void);
void timer0Int(void);

int saniye_birler='6'-'0';
int saniye_onlar=5;
int dakika_birler=4;
int dakika_onlar=3;
int saat_birler=2;
int saat_onlar=1;

int main(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

    LCD_init();
    timerIntSet();
    while(1)
    {

    }

}

void timerIntSet(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);

    TimerConfigure(TIMER0_BASE, TIMER_CFG_A_PERIODIC);
    TimerLoadSet(TIMER0_BASE, TIMER_A, SysCtlClockGet()-1);
    TimerEnable(TIMER0_BASE, TIMER_A);

    IntMasterEnable();
    IntEnable(INT_TIMER0A);

    TimerIntEnable(TIMER0_BASE,TIMER_TIMA_TIMEOUT);
    TimerIntClear(TIMER0_BASE, TIMER_TIMA_TIMEOUT);
    TimerIntRegister(TIMER0_BASE, TIMER_A, timer0Int);

}
void timer0Int(void)
{
    TimerIntClear(TIMER0_BASE, TIMER_TIMA_TIMEOUT);

    if(saniye_birler>=0)
    {
        LCD_Cursor(1, 12);
        LCD_Karakter('0'+saniye_birler);

        LCD_Cursor(1, 11);
        LCD_Karakter('0'+saniye_onlar);

        LCD_Cursor(1, 10);
        LCD_Karakter(':');

        LCD_Cursor(1, 9);
        LCD_Karakter('0'+dakika_birler);

        LCD_Cursor(1, 8);
        LCD_Karakter('0'+dakika_onlar);

        LCD_Cursor(1, 7);
        LCD_Karakter(':');

        LCD_Cursor(1, 6);
        LCD_Karakter('0'+saat_birler);

        LCD_Cursor(1, 5);
        LCD_Karakter('0'+saat_onlar);

        saniye_birler++;
    }
        if(saniye_birler > 9)
    {
        saniye_birler=0;
        saniye_onlar++;
    }

    if (saniye_onlar > 5)
    {
        saniye_onlar=0;
        dakika_birler++;
    }
    if (dakika_birler > 9)
        {
            dakika_birler=0;
            dakika_onlar++;
        }
    if (dakika_onlar > 5)
        {
            dakika_onlar=0;
            saat_birler++;
        }
    if(saat_birler > 4)
        {
            saat_birler=0;
            saat_onlar++;
        }
    if(saat_onlar==2 & saat_birler==4)
        {
            saat_birler=0;
            saat_onlar=0;
        }





}



