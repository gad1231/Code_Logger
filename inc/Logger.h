/**
 * 	@file Logger.h
 *	@date May 31, 2022
 *  @author Ahmed Gad
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include<iostream>
#include<fstream>
#include <sstream>
#include<string>

/**
 * @brief Logger is functor class is used for logging data and errors
 */
class Logger {

private:

	std::string name; /**< string variable contains the logger name*/
	std::fstream file { }; /**< file stream variable contains the logger file*/
	std::string path; /**< string variable contains the file path*/
	std::string option; /**< string variable contains the file option*/

public:
	/**
	 * @brief A Non-Default Constructor which open or create a file.
	 * @param [in] LoggerName
	 * @param [in] LoggerPath
	 * @param [in] option
	 */
	Logger(std::string LoggerName, std::string LoggerPath, std::string option);

	/**
	 * @brief A overloaded operator which log in the
	 * @param [in] line string variable contains the line will be logged
	 * @return
	 */
	int operator()(std::string line);

	/**
	 * @brief A Destructor which close the opened file.
	 */
	~Logger();
};

/**
 * @brief convert an input variable to string format
 * @tparam T a template parameter
 * @param [in] value a deduced variable
 * @return string variable
 */
template<typename T>
std::string ToString(const T &value) {
	std::stringstream convert;
	convert << value;
	return convert.str();
}

#endif /* LOGGER_H_ */
