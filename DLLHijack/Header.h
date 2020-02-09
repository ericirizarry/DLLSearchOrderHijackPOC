#pragma once

#ifdef HEADER_EXPORTS
#define HEADER_API __declspec(dllexport)
#else
#define HEADER_API __declspec(dllimport)
#endif

// Get the position of the current value in the sequence.
extern "C" HEADER_API unsigned thing_index();