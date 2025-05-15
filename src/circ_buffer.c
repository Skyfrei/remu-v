#include <stdlib.h>

#include "../include/circ_buffer.h"

void init_circ_buffer(circ_buffer* circ){
    circ->memory = malloc(EMU_MEMORY);
    circ->memory_size = EMU_MEMORY;
    circ->head = circ->memory;
    circ->tail = circ->memory;
}

void insert(circ_buffer* circ, int8_t val){
    if (circ->head > last_memory_address(circ)){
        circ->head = circ->memory;
        *(circ->head) = val;

    }
    else{
        *(circ->head) = val;
        circ->head++;

    }
}

void pop(circ_buffer* circ){
    if (circ->tail > last_memory_address(circ)){
        circ->tail = circ->memory;
        *(circ->tail) = 0;

    }
    else{
        *(circ->tail) = 0;
        circ->tail++;
    }
}

// Think of a better way here not exactly working
size_t get_size(circ_buffer* circ){
    //if (circ->head > circ->tail)
    //    return circ->head - circ->tail;

    //return (circ->memory - (circ->tail - circ->head));
    return 1;
}

static int8_t* last_memory_address(circ_buffer* circ){
    return circ->memory + (circ->memory_size - 1);
}
void* get_head(circ_buffer* circ){
    return circ->head;
}



