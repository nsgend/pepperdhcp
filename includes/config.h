/************************************************************
 * 
 * PepperDHCP - a lightweight DHCP server
 * Designed to be fully C++03 compliant on two major OSes (Windows & Linux)
 * 
 * Written by Noam S. G., (c) 2013
 * Licensed under LGPL v3, see LICENSE file for details.
 ************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

// Version definitions
#define PEPPER_NAME "PepperDHCP"
#define PEPPER_MAJOR 0
#define PEPPER_MINOR 1

// Logging
#define LOG_PREFIX "."
#define LOG_FILE "pepperdhcp.log"
#define LOG_LEVEL 3 /*	-1 => OFF
					*	0 => "FATAL", 1 => "ERROR", 2 => "WARNING",
					*	3 => "INFO", 4 => "DEBUG"
					*/

#endif