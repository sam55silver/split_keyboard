#pragma once

#ifdef KEYBOARD_handwired_cmd_ergo_6x6
    #include "6x6.h"
#endif

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif
