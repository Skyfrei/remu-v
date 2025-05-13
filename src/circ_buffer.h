#include <cstdint>

typedef struct{
    int8_t* memory;
    int8_t* head;
    int8_t* tail;


}circ_buffer;


void init(circ_buffer* circ, size_t mem_size);
void insert(circ_buffer* circ, int8_t val);
void pop(circ_buffer* circ);
size_t get_size(circ_buffer* circ);
static void move_head(circ_buffer* circ);
static void move_tail(circ_buffer* circ);

