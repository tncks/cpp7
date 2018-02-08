#pragma once
#ifndef DLLMAIN_EXPORTS
#define DLLMAIN_API __declspec(dllexport)
#else
#define DLLMAIN_API __declspec(dllimport)
#endif

namespace Hello
{
	DLLMAIN_API void printHello();
	DLLMAIN_API void printGoodBye();
}