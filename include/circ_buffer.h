#include <stdint.h>
#include <stddef.h>

//#define DEBUG
#ifndef DEBUG
    #define EMU_MEMORY 2048
#else 
    #define EMU_MEMORY 4096
#endif

typedef struct{
    int8_t* memory;
    int8_t* head;
    int8_t* tail;
    int memory_size;


}circ_buffer;


void init_circ_buffer(circ_buffer* circ);
void insert(circ_buffer* circ, int8_t val);
void pop(circ_buffer* circ);
void* get_head(circ_buffer* circ);
size_t get_size(circ_buffer* circ);
static int8_t* last_memory_address(circ_buffer* circ);

