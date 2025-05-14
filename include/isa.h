#ifndef ISA_H
#define ISA_H

#define DEFAULT

#ifndef DEFAULT
    #define IALIGN 32
#else 
    #define IALIGN 16
#endif

struct remu;

typedef enum {
    LI,
    ADD,
    
}OPCODE;

void load_immediate(struct remu* emu, void* command1, void* command2);
void add(struct remu* emu, void* command1, void* command2);


#endif
