#pragma once

#include "cmd_ergo.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_6x6(                              \
    L11, L12, L13, L14, L15, L16,                \
    L21, L22, L23, L24, L25, L26,                \
    L31, L32, L33, L34, L35, L36,                \
    L41, L42, L43, L44, L45, L46,                \
         L52, L53, L54, L55,                     \
                                  L61, L62, L63, \
                                  L64, L65, L66, \
                                                 \
         R11, R12, R13, R14, R15, R16,           \
         R21, R22, R23, R24, R25, R26,           \
         R31, R32, R33, R34, R35, R36,           \
         R41, R42, R43, R44, R45, R46,           \
              R52, R53, R54, R55,                \
R61, R62, R63,                                   \
R64, R65, R66                                    \
                                                 \
  ) \
  { \
    { L16,    L15,   L14,   L13,  L12,  L11    }, \
    { L26,    L25,   L24,   L23,  L22,  L21    }, \
    { L36,    L35,   L34,   L33,  L32,  L31    }, \
    { L46,    L45,   L44,   L43,  L42,  L41    }, \
    { KC_NO,  L55,   L54,   L53,  L52,  KC_NO  }, \
    { L63,    L66,   L62,   L65,  L61,  L64    }, \
    { R11,    R12,   R13,   R14,  R15,  R16    }, \
    { R21,    R22,   R23,   R24,  R25,  R26    }, \
    { R31,    R32,   R33,   R34,  R35,  R36    }, \
    { R41,    R42,   R43,   R44,  R45,  R46    }, \
    { KC_NO,  R52,   R53,   R54,  R55,  KC_NO  }, \
    { R61,    R64,   R63,   R65,  R62,  R66    }  \
}
