#include <stdio.h>

int main(int argc, char** argv) {
    if (argc == 1) {
        printf("");
    } else if (argc != 2) {
        fprintf(stderr, "Provide exactly one path to a module!\n");
        return 1;
    }

    return 0;
}
