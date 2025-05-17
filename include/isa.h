#ifndef ISA_H
#define ISA_H

#define DEFAULT

#ifndef DEFAULT
    #define IALIGN 32
#else 
    #define IALIGN 16
#endif

#include <stdbool.h>

typedef enum {
    X0,
    LI,
    ADD,
    SUB,
    XOR,
    OR,
    AND,
    SLL,
    SRL,
    SRA,
    SLT,
    SLTU,

}OPCODE;

//typedef enum{
//    X0, 
//    SP,
//    
//}REGISTER;

typedef struct remu remu;

void load_immediate(remu* emu, void* command1, void* command2);
void add(remu* emu, void* command1, void* command2);
void sub(remu* emu, void* command1, void* command2);
void xor(remu* emu, void* command1, void* command2);
void or(remu* emu, void* command1, void* command2);
void and(remu* emu, void* command1, void* command2);
void sll(remu* emu, void* command1, void* command2);
void srl(remu* emu, void* command1, void* command2);
void sra(remu* emu, void* command1, void* command2);
void slt(remu* emu, void* command1, void* command2);
void sltu(remu* emu, void* command1, void* command2);
void delete(remu* emu, void* command1, void* command2);
bool register_0(remu* emu, void* command1, void* command2);

#endif
