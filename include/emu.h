#ifndef EMU_H
#define EMU_H

#include <stdint.h>
#include <isa.h>
#include <circ_buffer.h>

typedef struct remu remu;

#ifndef DEBUG
    #define EMU_MEMORY 2048
#else 
    #define EMU_MEMORY 4096
#endif


struct remu{
    void* memory;
    void* assembly_code_buffer;
    void* registers[32];

    
};

typedef void (*opCodeHandler)(remu* emu, void* command1, void* command2);

void init_remu(remu* emu, char* file_name);
void load_instruction(remu* emu, OPCODE op, void* command1, void* command2);
void* get_temporary_register(remu* emu, bool floating);
static void free_memory(remu* emu);
static void change_register();
static int set_memory();
static void* map_opcode(remu* emu, OPCODE op);
static size_t parse_assembly(remu* emu, const char* file);
static void free_register(remu* emu, bool floating);


#endif
