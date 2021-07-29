#ifndef KEYBOARD_H
#define KEYBOARD_H


#include "../kernel/util.h"
#include "../sys/ports.h"
#include "../arch/i386/isr.h"
#include "screen.h"
#include "../libc/string.h"
#include "../libc/function.h"
#include "../kernel/kernel.h"

#define BACKSPACE 0x0E
#define ENTER 0x1C
#define SC_MAX 57

void init_keyboard();


#endif
