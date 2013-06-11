/************************************************************
 * 
 * PepperDHCP - a lightweight DHCP server
 * Designed to be fully C++03 compliant on two major OSes (Windows & Linux)
 * 
 * Written by Noam S. G., (c) 2013
 * Licensed under LGPL v3, see LICENSE file for details.
 ************************************************************/

// Class files
#include "common.h"
#include "config.h"
#include "pepper.h"


int main(int argc, char **argv) {
    Pepper app = Pepper();
    return app.Run();
}
