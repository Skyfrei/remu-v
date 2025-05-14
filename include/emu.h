#ifndef EMU_H
#define EMU_H
#include <stdint.h>
#include <isa.h>
#include <circ_buffer.h>

typedef struct {
    circ_buffer memory;
    void* registers[32];
}remu;

typedef void (*opCodeHandler)(remu* emu, void* command1, void* command2);

void init_remu(remu* emu);
void load_instruction(remu* emu, OPCODE op, void* command1, void* command2);
static void change_register();
static int set_memory();
static void* map_opcode(remu* emu, OPCODE op);


#endif
