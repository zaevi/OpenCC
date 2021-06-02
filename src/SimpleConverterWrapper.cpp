#include "SimpleConverterWrapper.hpp"

void SCWrapperInit(const char* configFileName) {
	std::string input = configFileName;
	converter = new opencc::SimpleConverter(input);
}

const char* __stdcall SCWrapperConvert(const char* input) {
	std::string outvar = converter->Convert(input);
	const char* result = outvar.c_str();
	size_t size = outvar.capacity();
	static char* ret = new char[size];
	strcpy(ret, result);
	return ret;
}
