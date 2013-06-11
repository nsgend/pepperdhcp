/************************************************************
 * 
 * PepperDHCP - a lightweight DHCP server
 * Designed to be fully C++03 compliant on two major OSes (Windows & Linux)
 * 
 * Written by Noam S. G., (c) 2013
 * Licensed under LGPL v3, see LICENSE file for details.
 ************************************************************/

#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <time.h>

#include "log.h"
#include "config.h"
#include "common.h"

const char Log::ResolvedLevels[5][8] = { "FATAL", "ERROR", "WARNING", "INFO", "DEBUG" };

std::string Log::Time() {
	time_t RawTime;
	time(&RawTime);
	std::string sTime(ctime(&RawTime));
	sTime.erase(std::remove(sTime.begin(), sTime.end(), '\n'), sTime.end());
	return sTime;
}

void Log::Message(std::string Message, uint8_t Level) {
	if (Level > LOG_LEVEL) return;
    std::cout << "<<" << Log::Time() << ">>" << "[" << PEPPER_NAME << "]<" << Log::ResolvedLevels[Level] << "> " << Message << std::endl;
}

void Log::Message(std::string Message, uint8_t Level, std::string Caller) {
	if (Level > LOG_LEVEL) return;
	if (LOG_LEVEL >= Log::DEBUG) {
   		std::cout << "<<" << Log::Time() << ">>" << "[" << PEPPER_NAME << "]<" << Log::ResolvedLevels[Level] << ">{" << Caller << "} " << Message << std::endl;
   		return;
	}
	std::cout << "<<" << Log::Time() << ">>" << "[" << PEPPER_NAME << "]<" << Log::ResolvedLevels[Level] << "> " << Message << std::endl;
}

void Log::Message(std::stringstream Stream, uint8_t Level, std::string Caller) {
	if (Level > LOG_LEVEL) return;
	if (LOG_LEVEL >= Log::DEBUG) {
		std::cout << "<<" << Log::Time() << ">>" << "[" << PEPPER_NAME << "]<" << Log::ResolvedLevels[Level] << ">{" << Caller << "} ";
	} else {
		std::cout << "<<" << Log::Time() << ">>" << "[" << PEPPER_NAME << "]<" << Log::ResolvedLevels[Level] << "> ";
	}
	std::copy(std::istreambuf_iterator<char>(Stream),
		std::istreambuf_iterator<char>(),
		std::ostreambuf_iterator<char>(std::cout));
    std::cout << std::endl;
}