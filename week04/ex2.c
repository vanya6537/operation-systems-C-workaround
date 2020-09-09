#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    /* Loop 3 times */
    for (int i = 0; i < 3; ++i) {
        fork();
    }
    /* Sleep 5 sec */
    sleep(5);
    return 0;
}