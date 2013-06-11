/************************************************************
 * 
 * PepperDHCP - a lightweight DHCP server
 * Designed to be fully C++03 compliant on two major OSes (Windows & Linux)
 * 
 * Written by Noam S. G., (c) 2013
 * Licensed under LGPL v3, see LICENSE file for details.
 ************************************************************/

#include <iostream>

#include "log.h"
#include "pepper.h"
#include "config.h"

Pepper::Pepper() {
    
}

int Pepper::Run() {
    Log::Message("Initializing program..", Log::INFO, "Pepper::Run");
    
    return 0;
}

