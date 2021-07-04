#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define C_MAGENTA "\x1b[35m"
#define C_BLUE    "\x1b[34m"
#define C_CYAN    "\x1b[36m"
#define C_RESET   "\x1b[0m"

#include "help.h"

char *prompt() {
    char * input = NULL;
    size_t len;

    printf("> ");

    getline(&input, &len, stdin);
    input[strcspn(input, "\n")] = 0;

    return input;
}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "spawn") == 0) {
            printf("create or clone a repo to <domain/user/repo>\n");
        } else if (strcmp(argv[i], "modify") == 0) {
            printf("set <option> to <value> on <repo>\n");
        } else if (strcmp(argv[i], "config") == 0) {
            printf("set <option> to <value> on <user>\n");
        } else if (strcmp(argv[i], "graph") == 0) {
            printf("graph information with <graph>\n");
        } else if (strcmp(argv[i], "alias") == 0) {
            printf("alias <given command string> <alias>\n");
        } else if (strcmp(argv[i], "breathe") == 0) {
            printf("open a <git porcelain ui> on the current git directory\n");
        } else if (strcmp(argv[i], "--help") == 0) { usage(stdout);
        } else if (strcmp(argv[i], "-h") == 0) { usage(stdout);
        } else if (strcmp(argv[i], "prompt") == 0) {
            printf("enter something:\n");
            printf("you entered %s\n", prompt());


        } else if (argc > 1){
            const char *other_arg = argv[1];

            //if(strcmp(other_arg == alias_list[])){} else
            if(strchr(other_arg,'/')) {
                printf("gm: %s may be a path\n", other_arg);
                printf("gm: yay!\n");
            } else {
                printf("gm: %s is not a command\n", other_arg);
            }
        }
    }
    if (argc == 1) {
        usage(stderr);
    }
}
