#include <stdbool.h>
#include <stdint.h>
#include <lcdh.h>
#include "driverlib/sysctl.h"

int main(void) {

        SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

        LCD_init();
            LCD_Fonksiyon(4, 2, 7);
            LCD_Cursor(1,13);
            LCD_Karakter('C');
            LCD_Karakter('A');
            LCD_Karakter('G');
            LCD_Karakter('R');
            LCD_Karakter('I');
            LCD_Karakter(' ');
            LCD_Karakter('K');
            LCD_Karakter('O');
            LCD_Karakter('Y');
            LCD_Karakter('U');
            LCD_Karakter('N');
            LCD_Karakter('C');
            LCD_Karakter('U');
            SysCtlDelay(80000000/3);


}
