#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <emu.h>

char* accept_input(int arg_num, char* argv[]){
    char* file_name;

    if (arg_num <= 1)
        exit(1);

    for (int i = 1; i < arg_num; i++){
        if (strcmp(argv[i], "-h") == 0){
            printf("%s\n", "Use -i to pass the input assembly file.");
            exit(0);
        }
        if (strcmp(argv[i], "-i") == 0){
            if (i + 1 < arg_num){
                file_name = argv[i + 1];
            }
        }
    }

    return file_name;
}

int main(int argc, char* argv[]){
    char* file_name = accept_input(argc, argv);
    remu emulator;
    init_remu(&emulator, file_name);
    
     
    exit(0);
}
