#ifndef ISA_H
#define ISA_H

#define DEFAULT

#ifndef DEFAULT
    #define IALIGN 32
#else 
    #define IALIGN 16
#endif

#include <stdbool.h>
#include <emu.h>


typedef enum {
    X0,
    LI,
    ADD,
    
}OPCODE;

typedef struct remu remu;


void load_immediate(remu* emu, void* command1, void* command2);
void add(remu* emu, void* command1, void* command2);
void delete(remu* emu, void* command1, void* command2);
bool register_0(remu* emu, void* command1, void* command2);


#endif
