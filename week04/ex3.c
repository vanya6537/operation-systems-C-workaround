#include <stdlib.h>
#include <stdio.h>

#define MAX_COMMAND_LENGTH 200

int main() {
    char command[MAX_COMMAND_LENGTH];
    fgets(command, MAX_COMMAND_LENGTH, stdin);
    system(command);
    return 0;
}