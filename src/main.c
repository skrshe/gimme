#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void usage(FILE *stream) {
    fprintf(stream, "Usage:\n");
    fprintf(stream, "    gm <command> <flags>\n");
    fprintf(stream, "\n");
    fprintf(stream, "Commands:\n");
    fprintf(stream, "    spawn    create and clone a repository modify set remote options\n");
    fprintf(stream, "    modify   set remote options\n");
    fprintf(stream, "    config   set gimme options\n");
    fprintf(stream, "    graph    graph parts of git data\n");
    fprintf(stream, "    alias    create aliases\n");
    fprintf(stream, "    breathe  git porcelain server for many applications\n");
    fprintf(stream, "\n");
    fprintf(stream, "Flags:\n");
    fprintf(stream, "    -h --help show this message\n");
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
