/**
 * 	@file Logger.cpp
 *	@date May 31, 2022
 *  @author Ahmed Gad
 */
#include "Logger.h"

Logger::Logger(std::string LoggerName, std::string LoggerPath,
		std::string option) :
		name(LoggerName), path(LoggerPath), option { "trunc" } {

	if (option == static_cast<std::string>("app")) {

		file.open(LoggerPath, std::ios::app | std::ios::out | std::ios::in);

	} else if (option == static_cast<std::string>("ate")) {

		file.open(LoggerPath, std::ios::ate | std::ios::out | std::ios::in);

	} else {

		file.open(LoggerPath);
	}
}

int Logger::operator()(std::string line) {

	std::cout << '[' << name << "]:" << line << std::endl;

	file << '[' << name << "]:" << line << '\n';

	return line.length();
}

Logger::~Logger() {

	file.close();
}
