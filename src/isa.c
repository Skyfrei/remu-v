#include <isa.h>
#include <emu.h>

void load_immediate(remu* emu, void* command1, void* command2){
    void* reg = get_temporary_register(emu, false);
    void* reg2 = get_temporary_register(emu, false);
    reg = command1;
    reg2 = command2;
    return;
}

void add(remu* emu, void* command1, void* command2){

}

void sub(remu* emu, void* command1, void* command2){
}

void xor(remu* emu, void* command1, void* command2){
}

void or(remu* emu, void* command1, void* command2){
}

void and(remu* emu, void* command1, void* command2){
}

void sll(remu* emu, void* command1, void* command2){
}

void srl(remu* emu, void* command1, void* command2){
}

void sra(remu* emu, void* command1, void* command2){
}

void slt(remu* emu, void* command1, void* command2){
}

void sltu(remu* emu, void* command1, void* command2){
}


void delete(remu* emu, void* command1, void* command2){

}

bool register_0(remu* emu, void* command1, void* command2){
    return 0;
}

