/************************************************************
 * 
 * PepperDHCP - a lightweight DHCP server
 * Designed to be fully C++03 compliant on two major OSes (Windows & Linux)
 * 
 * Written by Noam S. G., (c) 2013
 * Licensed under LGPL v3, see LICENSE file for details.
 ************************************************************/
 
#ifndef LOG_H
#define LOG_H

#include "common.h"

class Log {	
public:
	enum Levels { FATAL=0, ERROR=1, WARNING=2, INFO=3, DEBUG=4 };
	static const char ResolvedLevels[5][8];
	static std::string Time();
    static void Message(std::string Message, uint8_t Level);
    static void Message(std::string Message, uint8_t Level, std::string Caller);
    static void Message(std::stringstream stream, uint8_t Level, std::string Caller);
};

#endif