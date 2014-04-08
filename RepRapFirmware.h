/****************************************************************************************************

RepRapFirmware - Main Include

This includes all the other include files in the right order and defines some globals.
No other definitions or information should be in here.

-----------------------------------------------------------------------------------------------------

Version 0.1

18 November 2012

Adrian Bowyer
RepRap Professional Ltd
http://reprappro.com

Licence: GPL

****************************************************************************************************/

#ifndef REPRAPFIRMWARE_H
#define REPRAPFIRMWARE_H

#include <cstddef>		// for size_t
#include <cfloat>
#include <cstdarg>


// Warn of what's to come, so we can use pointers to classes...

class Network;
class Platform;
class Webserver;
class GCodes;
class Move;
class Heat;
class RepRap;
class FileStore;

// A single instance of the RepRap class contains all the others

extern RepRap reprap;

// Functions and globals not part of any class

void debugPrintf(const char* fmt, ...);
int sncatf(char *dst, size_t len, const char* fmt, ...);
#if 0	// no longer used
char* ftoa(char *a, const float& f, int prec);
#endif
bool StringEndsWith(const char* string, const char* ending);
bool StringStartsWith(const char* string, const char* starting);
bool StringEquals(const char* s1, const char* s2);
int StringContains(const char* string, const char* match);

// Macro to give us the number of elements in an array
#define ARRAY_SIZE(_x) (sizeof(_x)/sizeof(_x[0]))

extern char scratchString[];

#include "Arduino.h"
#include "Configuration.h"
#include "Network.h"
#include "Platform.h"
#include "Webserver.h"
#include "GCodes.h"
#include "Move.h"
#include "Heat.h"
#include "Reprap.h"


#endif



