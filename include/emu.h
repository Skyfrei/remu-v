#include <stdint.h>
#include "../include/circ_buffer.h"

typdef struct {
    circ_buffer memory;

}remu;


remu EMU;


void init_remu(remu* emu);
static void change_register();
static int set_memory();





