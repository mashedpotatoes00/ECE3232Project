/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.1
        Device            :  dsPIC33CK256MP506
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.70
        MPLAB 	          :  MPLAB X v5.50
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/


#define FCY 8000000UL   // FCY set to 8MHz
/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"

#include <xc.h>
#include <libpic30.h>
/**
 * set the patterns to display on the seven seg digits
 *  as seen bellow 
 *   A_      C9=A, C8=B, C1=C,C2=D, C6=E, C3=F, D11=G, D10=DP
 * F|G_|B           
 * E|D_|C DP.
 *   
 */
void setZero(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 0;
     LATCbits.LATC6 = 0;
     LATCbits.LATC3 = 0;
     LATDbits.LATD11 = 1;
     LATDbits.LATD10 = 1;
}
void setOne(){
     LATCbits.LATC9 = 1;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 1;
     LATCbits.LATC6 = 1;
     LATCbits.LATC3 = 1;
     LATDbits.LATD11 = 1;
     LATDbits.LATD10 = 1;
}
void setTwo(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 1;
     LATCbits.LATC2 = 0;
     LATCbits.LATC6 = 0;
     LATCbits.LATC3 = 1;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}
void setThree(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 0;
     LATCbits.LATC6 = 1;
     LATCbits.LATC3 = 1;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}
void setFour(){
     LATCbits.LATC9 = 1;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 1;
     LATCbits.LATC6 = 1;
     LATCbits.LATC3 = 0;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}
void setFive(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 1;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 0;
     LATCbits.LATC6 = 1;
     LATCbits.LATC3 = 0;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}
void setSix(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 1;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 0;
     LATCbits.LATC6 = 0;
     LATCbits.LATC3 = 0;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}
void setSeven(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 1;
     LATCbits.LATC6 = 1;
     LATCbits.LATC3 = 1;
     LATDbits.LATD11 = 1;
     LATDbits.LATD10 = 1;
}
void setEight(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 0;
     LATCbits.LATC6 = 0;
     LATCbits.LATC3 = 0;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}
void setNine(){
     LATCbits.LATC9 = 0;
     LATCbits.LATC8 = 0;
     LATCbits.LATC1 = 0;
     LATCbits.LATC2 = 1;
     LATCbits.LATC6 = 1;
     LATCbits.LATC3 = 0;
     LATDbits.LATD11 = 0;
     LATDbits.LATD10 = 1;
}

/**
 * set seven seg digits
 * digits have to be turned on set, then turned off after,
 * leaving on will cause digits to be set to wrong digit
 * need a loop constantly setting digits to have a display  
 */
void setD1(){
    PORTCbits.RC12 = 1;
    __delay_ms(1);
    PORTCbits.RC12 = 0;
}
void setD2(){
    PORTBbits.RB15 = 1;
    __delay_ms(1);
    PORTBbits.RB15 = 0;
}
void setD3(){
    PORTBbits.RB14 = 1;
    __delay_ms(1);
    PORTBbits.RB14 = 0;
}
void setD4(){
    PORTBbits.RB13 = 1;
    __delay_ms(1);
    PORTBbits.RB13 = 0;
}

void setDigit(int num){
    switch (num){
        case 0:
            setZero();
            break;
        case 1:
            setOne();
            break;
        case 2:
            setTwo();
            break;
        case 3:
            setThree();
            break;
        case 4:
            setFour();
            break;
        case 5:
            setFive();
            break;
        case 6:
            setSix();
            break;
        case 7:
            setSeven();
            break;
        case 8:
            setEight();
            break;
        case 9:
            setNine();
            break;
    }
}
/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    int d1,d2,d3,d4 = 0;
    
    while (1)
    {
        setDigit(d1);
        setD1();
        setDigit(d2);
        setD2();
        setDigit(d3);
        setD3();
        setDigit(d4);
        setD4();
        
    }
    return 1; 
}
/**
 End of File
*/

