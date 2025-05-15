#include <emu.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

void init_remu(remu* emu){
    init_circ_buffer(&emu->memory);
    memset(emu->registers, 0, 32);
}

void* get_temporary_memory(remu* emu, bool floating){
    while(true){
        switch(floating){
            case 0:
                if (emu->registers[4] == nullptr)          
                    return emu->registers[4];              
                if (emu->registers[5] == nullptr)          
                    return emu->registers[4];              
                if (emu->registers[6] == nullptr)          
                    return emu->registers[4];              
                if (emu->registers[7] == nullptr)          
                    return emu->registers[4];              
            break;                                         
                                                           
            case 1:                                        
                if (emu->registers[27] == nullptr)
                    return emu->registers[4];              
                if (emu->registers[28] == nullptr)         
                    return emu->registers[4];              
                if (emu->registers[29] == nullptr)         
                    return emu->registers[4];              
                if (emu->registers[30] == nullptr)         
                    return emu->registers[4];              
            break; 
        }
        free_register(emu, floating);                      
    }                                                  
}

static void free_register(remu* emu, bool floating){
    // do some kind of logic here to free based on time
    switch(floating){
        case 0:
            emu->registers[4] = nullptr;
        break;

        case 1:
            emu->registers[27] = nullptr;
        break;
    }
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
        case X0:
            return register_0;
    }
}

static int8_t get_register_value(remu* emu, void* reg){
    return 1;
    //return (int8_t)*reg; 
}

static void change_register(){

}

static void* check_register(remu* emu, void* reg){
    if (reg == nullptr)
        return nullptr;
}

static size_t parse_assembly(const char* file_name){
    //FILE* file = fopen(file_name, "r"); 
    //if (!file){
    //    printf("Failed to open file");
    //}

    return 2;
}



