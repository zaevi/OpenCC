

#ifndef __OPENCC_SIMPLECONVERTERWRAPPER_HPP_
#define __OPENCC_SIMPLECONVERTERWRAPPER_HPP_

#include "SimpleConverter.hpp"

    opencc::SimpleConverter* converter;

    //extern __declspec(dllexport) int SCWrapperInit(const char* configFileName);

    extern "C" __declspec(dllexport) void __stdcall SCWrapperInit(
        const char* configFileName);

    extern "C" __declspec(dllexport) const char* __stdcall SCWrapperConvert(
        const char* input);

#endif 