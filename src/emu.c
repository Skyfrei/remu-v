#include <emu.h>
#include <string.h>

void init_remu(remu* emu){
    init_circ_buffer(&emu->memory);
    memset(emu->registers, 0, 32);
}


static void change_register(){
    

}

static void* check_register(remu* emu, void* reg){
    if (reg == nullptr)
        return nullptr;
}

void load_instruction(remu* emu, OPCODE op, void* command1, void* command2){
    opCodeHandler operation = (opCodeHandler)map_opcode(emu, op);
    operation(emu, command1, command2);
     
    

}


static void* map_opcode(remu* emu, OPCODE op){
    switch(op){

        case LI:
            return load_immediate;
        case ADD:
            return add;
    }
}

static int8_t get_register_value(remu* emu, void* reg){
    return 1;
    //return (int8_t)*reg; 
}
