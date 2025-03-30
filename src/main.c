#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc != 3) {
        if(argc >= 1){
            printf("Usage: %s [command] <filename>\n", argv[0]);
        }
        return 1;
    }

    char* command = argv[1];
    char* filename = argv[2];

    if(strcmp(command , "create") == 0){
        printf("Creating: %s\n", filename);
        return 0;
    } else {
        printf("Unknown command: %s\n", command);
        printf("Available commands: create\n");
        return 1;
    }
    return 0;
}