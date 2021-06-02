

#ifndef __OPENCC_SIMPLECONVERTERWRAPPER_HPP_
#define __OPENCC_SIMPLECONVERTERWRAPPER_HPP_

#include "SimpleConverter.hpp"

    opencc::SimpleConverter* converter;
    char* temp = new char[2048]; 

    extern "C" __declspec(dllexport) void __stdcall SCWrapperInit(
        const char* configFileName);

    extern "C" __declspec(dllexport) const char* __stdcall SCWrapperConvert(
        const char* input);

#endif 