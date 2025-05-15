#include <isa.h>

void load_immediate(remu* emu, void* command1, void* command2){
    void* reg = get_temporary_memory(emu, false);
    void* reg2 = get_temporary_memory(emu, false);
    reg = command1;
    reg2 = command2;
    return;
}

void add(remu* emu, void* command1, void* command2){

}

void delete(remu* emu, void* command1, void* command2){

}

bool register_0(remu* emu, void* command1, void* command2){
    return 0;
}

