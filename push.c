#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "monty.h"

void push(int value) {
    printf("Pushed value: %d\n", value);
}

int main(int argc, char *argv[]) {

	char *endptr = NULL;
	int value;

	if (argc != 2) {
        fprintf(stderr, "Error: L%d: Usage: %s <int>\n", __LINE__, argv[0]);
        exit(EXIT_FAILURE);
    }
    

    if (!isdigit(argv[1][0])) {
        fprintf(stderr, "Error: L%d: Usage: %s integer\n", __LINE__, argv[0]);
        exit(EXIT_FAILURE);
    }

    value = strtol(argv[1], &endptr, 10);

    if (*endptr != '\0') {
        fprintf(stderr, "Error: L%d: Usage: %s integer\n", __LINE__, argv[0]);
        exit(EXIT_FAILURE);
    }

    push(value);

    return 0;
}

