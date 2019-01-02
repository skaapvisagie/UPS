
/* 
 * File: UPS Charger
 * Author: Vaughn Sander
 * Comments:
 * Revision history: Check git repo
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef MAIN    
#define	MAIN

#include <xc.h> // include processor files - each processor file is guarded.  

#define Batt_Dead 5500

#define Batt_flaot 40000

    

// enum State is the main state machine that controls the UPS
// States:
// - e_Charging: State where the main mains power is on and the battery is charging 
// - e_Float: Float state is when the battery is fully charged and the program checks the 
enum State
{
    e_Init = 0,
    e_Charging,
    e_Float, 
    e_BatPower 
}CurrentState;

enum Batt_status
{
    e_Batt_Dead = 0,
    e_Batt_Charge,
    e_Batt_Full
}Batt_Status;


// Function declaration 
void Calabrate_Chrage_Pwm(void);




#endif	/* MAIN */

