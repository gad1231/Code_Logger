/**
 * @file	Functor_Files_IO_Stream.cpp
 * @author	Ahmed Gad
 * @date	May 31, 2022
 */

#include"Logger.h"


int main() {

	Logger Out("out", "log.txt", "app");
	Logger Error("error", "errorlog.txt", "app");

	int * ptr = nullptr;
	auto x= 10;

	if( nullptr ==  ptr ){

		Error("The ptr pointer is a null pointer");

	}

	ptr = &x;
	Out("The ptr pointer is initialized with the address of x");
	Out( static_cast<std::string>("the value of the variable pointed by ptr = ") + ToString<int>(*ptr));

	return 0;
}
