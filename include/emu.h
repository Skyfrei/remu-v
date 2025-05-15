#ifndef EMU_H
#define EMU_H

#include <stdint.h>
#include <isa.h>
#include <circ_buffer.h>

typedef struct remu remu;

struct remu{
    circ_buffer memory;
    void* registers[32];
    
};

typedef void (*opCodeHandler)(remu* emu, void* command1, void* command2);

void init_remu(remu* emu);
void load_instruction(remu* emu, OPCODE op, void* command1, void* command2);
void* get_temporary_memory(remu* emu, bool floating)
static void free_memory(remu* emu);
static void change_register();
static int set_memory();
static void* map_opcode(remu* emu, OPCODE op);
static size_t parse_assembly(const char* file);
static void free_register(remu* emu, bool floating);


#endif
