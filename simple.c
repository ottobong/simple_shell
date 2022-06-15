#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

#define PRMTSIZ 255
#define MAXARGS 63
#define EXITCMD "exit"

int main(void) {
    for (;;) {
        char inp[PRMTSIZ + 1] = { 0x0 };
        char *ptr = inp;
        char *args[MAXARGS + 1] = { NULL };
        int wstatus;
        long unsigned int i;

        printf("%s ", getuid() == 0 ? "#" : "=>");
        fgets(inp, PRMTSIZ, stdin);

        if (*ptr == '\n') continue;

        for (i = 0; i < sizeof(args) && *ptr; ptr++) {
            if (*ptr == ' ') continue;
            if (*ptr == '\n') break;
            for (args[i++] = ptr; *ptr && *ptr != ' ' && *ptr != '\n'; ptr++);

                        *ptr = '\0';
        }

        if (strcmp(EXITCMD, args[0]) == 0) return 0;

        signal(SIGINT, SIG_DFL);
        if (fork() == 0) exit(execvp(args[0], args));
        signal(SIGINT, SIG_IGN);

        wait(&wstatus);
        if (WIFEXITED(wstatus)) printf("<%d>", WEXITSTATUS(wstatus));
    }
}
