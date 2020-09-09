#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* Forks process into two: Parent and Child
 * If fork() returns 0 - it is a Child process | else - Parent */

int main() {
    pid_t id = fork();
    if (id == 0) {
        printf("Hello from child [PID - %d]\n", getpid());
    } else if (id > 0) {
        printf("Hello from parent [PID - %d]\n", getpid());
    }

    return 0;
} 