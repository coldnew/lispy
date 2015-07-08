#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

const char *version = "0.0.1";

int main(int argc, char *argv[])
{
        printf("MiniLisp - v%s ", version);
        printf("Press Ctrl-c to exit\n");

        while (1) {
                char *input = readline("lisp> ");
                add_history(input);

                printf("you type: %s\n", input);
                free(input);
        }

        return 0;
}
