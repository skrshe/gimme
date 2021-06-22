#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define C_MAGENTA "\x1b[35m"
#define C_BLUE    "\x1b[34m"
#define C_CYAN    "\x1b[36m"
#define C_RESET   "\x1b[0m"

static void usage(FILE *stream) {
    fprintf(stream, C_CYAN  "Usage:\n");
    fprintf(stream, C_RESET "    gm <command> <flags>\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_CYAN  "Commands:\n");
    fprintf(stream, C_CYAN  "    <string>\n");
    fprintf(stream, C_RESET "            shortcut to spawn");
    fprintf(stream, C_BLUE  "    spawn <repo>\n");
    fprintf(stream,         "            create and/or clone repo from a list of\n");
    fprintf(stream,         "            predefined remotes\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_BLUE  "    modify <repo> <option> <value>\n");
    fprintf(stream, C_RESET "            set remote options\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_BLUE  "    config <option> <value>\n");
    fprintf(stream, C_RESET "            set gimme options\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_BLUE  "    graph <type>\n");
    fprintf(stream, C_RESET "            graph parts of git data\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_BLUE  "    alias <cmd> <alias>\n");
    fprintf(stream, C_RESET "            create gm aliases\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_BLUE  "    breathe <port>\n" );
    fprintf(stream, C_RESET "            git porcelain  that can be ran as a\n");
    fprintf(stream,         "            server for many exteranl applications\n");
    fprintf(stream,         "\n");
    fprintf(stream, C_CYAN  "Flags:\n");
    fprintf(stream, C_BLUE  "    -h --help\n");
    fprintf(stream, C_RESET "            show this message, supply after a\n");
    fprintf(stream,         "            <command> for more command info\n");
}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "spawn") == 0) {
            printf("create a repo at <domain/user/repo>\n");
        }
        else if (strcmp(argv[i], "modify") == 0) {
            printf("set <option> to <value> on <repo>\n");
        }
        else if (strcmp(argv[i], "config") == 0) {
            printf("set <option> to <value> on <user>\n");
        }
        else if (strcmp(argv[i], "graph") == 0) {
            printf("graph information with <graph>\n");
        }
        else if (strcmp(argv[i], "alias") == 0) {
            printf("alias <given command string> <alias>\n");
        }
        else if (strcmp(argv[i], "breathe") == 0) {
            printf("open a <git porcelain ui> on the current git directory\n");
        }
        else if (strcmp(argv[i], "--help")){
            usage(stdout);
        }
        else if (strcmp(argv[i], "-h")){
            usage(stdout);
        }
    }

    if (argc == 1){
        printf("hello git!\n");
    }
}
