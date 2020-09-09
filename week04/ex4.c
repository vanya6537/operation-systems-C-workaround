#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define EXEC_PATH "./ex3"


int main(int argc, char *argv[]) {
    pid_t id = fork();

    if (id == 0) {
        /* Child process executes command */

        /* Memory allocation for the arguments */
        char **command_args = malloc((argc) * sizeof(char));

        /* Arguments are all entities without the name of executed program */
        for (int i = 0; i < argc - 1; ++i) {
            command_args[i] = argv[i + 1];
        }

        /* Execution! */
        execve(EXEC_PATH, command_args, NULL);

    } else if (id > 0) {

        /* Parent process waits */
        pid_t status;
        waitpid(id, &status, 0);

    } else {

        return -1;
    }

    return 0;
}
