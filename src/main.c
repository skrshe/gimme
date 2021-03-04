#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "spawn") == 0) {
            printf("create a repo at <domain/user/repo>")
        }
        else if (strcmp(argv[i], "modify") == 0) {
            printf("set <option> to <value> on <repo>")
        }
        else if (strcmp(argv[i], "config") == 0) {
            printf("set <option> to <value> on <user>")
        }
        else if (strcmp(argv[i], "graph") == 0) {
            printf("graph information with <graph>")
        }
        else if (strcmp(argv[i], "alias") == 0) {
            printf("alias <given command string> <alias>")
        }
        else if (strcmp(argv[i], "breathe") == 0) {
            printf("open a <git porcelain ui> on the current git directory")
        }
        else if (strcmp(argv[i], "") == 0) {
            printf("hello git!");
        }
    }
}
