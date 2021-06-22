#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define C_MAGENTA "\x1b[35m"
#define C_CYAN    "\x1b[36m"
#define C_RESET   "\x1b[0m"

static void usage(FILE *stream) {
    fprintf(stream, C_MAGENTA "Usage:\n");
    fprintf(stream, C_CYAN    "    gm" C_RESET " <command> <flags>\n");
    fprintf(stream,           "\n");
    fprintf(stream, C_MAGENTA "Commands:\n");
    fprintf(stream, C_CYAN    "    spawn\n");
    fprintf(stream, C_RESET   "            create and clone a repository modify\n");
    fprintf(stream,           "            set remote options\n");
    fprintf(stream, C_CYAN    "    modify\n");
    fprintf(stream, C_RESET   "            set remote options\n");
    fprintf(stream, C_CYAN    "    config\n");
    fprintf(stream, C_RESET   "            set gimme options\n");
    fprintf(stream, C_CYAN    "    graph\n");
    fprintf(stream, C_RESET   "            graph parts of git data\n");
    fprintf(stream, C_CYAN    "    alias\n");
    fprintf(stream, C_RESET   "            create aliases\n");
    fprintf(stream, C_CYAN    "    breathe\n" );
    fprintf(stream, C_RESET   "            git porcelain  that can be ran as a\n");
    fprintf(stream,           "            server for many exteranl applications\n");
    fprintf(stream, C_CYAN    "\n");
    fprintf(stream, C_MAGENTA "Flags:\n");
    fprintf(stream, C_CYAN    "    -h --help\n");
    fprintf(stream, C_RESET " show this message\n");
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
