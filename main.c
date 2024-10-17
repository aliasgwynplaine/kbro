#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define endl printf("\n");

char * coleur[] = {
//    "30",
    "31",
    "32",
    "33",
    "34",
    "35",
    "36",
    "37"
};

void printcwco(char * c, char * co) {
    printf("\033[1m\033[%sm%c\033[0m", co, *c);
}


int main(int argc, char * argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <text>\n", argv[0]);
        exit(1);
    }

    //printf(argv[1]);
    //endl;

    for (int i = 0; i < strlen(argv[1]); i++) {
        printcwco(&argv[1][i], coleur[i % 7]);
    }


    return 0;
}
