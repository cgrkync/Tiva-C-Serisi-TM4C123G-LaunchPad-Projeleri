
#define TARGET_IS_BLIZZARD_RB1
#include <stdint.h>                        
#include <stdbool.h>                        
#include <math.h>                           
#include "inc/tm4c123gh6pm.h"               
#include "inc/hw_memmap.h"                  
#include "inc/hw_types.h"                   
#include "driverlib/sysctl.h"              
#include "driverlib/fpu.h"                  
#include "driverlib/rom.h"                  

#ifndef M_PI
#define M_PI 3.14159265358979323846         // Define M_PI if not already defined
#endif

#define SERIES_LENGTH 100                   // Define SERIES_LENGTH equal to no. of sample points


float gSeriesData[SERIES_LENGTH];           // Create an array of floating point numbers of specified size
int32_t i32DataCount = 0;                   // Create a variable to keep track of number of points sampled


int main(void){
    // Create a temporary variable to store value of one sampling point in radians
    float fRadians;
    // Enable FPU Lazy Stacking.
    // This will enable skipping stacking of Floating point nos. during interrupts
    ROM_FPULazyStackingEnable();
    // Enable Floating point number
    ROM_FPUEnable();

    // Set the System clock to 80MHz
    ROM_SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    // Calculate the value of one sampling point in radians
    fRadians = ((2 * M_PI) / SERIES_LENGTH);

    // Calculate the sine wave for 2*Pi radians with "SERIES_LENGTH" sampling points
    while(i32DataCount < SERIES_LENGTH){
        gSeriesData[i32DataCount] = sinf(fRadians * i32DataCount);
        i32DataCount++;
    }
    while(1);
}

