#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 256

int main(int argc, char const *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL) {
        printf("Error: could not open file %s\n", argv[1]);
        return 1;
    }

    char *line = malloc(BUFF_SIZE * sizeof(char));
    while (fgets(line, BUFF_SIZE, input) != NULL) {
        printf("%s", line);
    }
    
    free(line);
    fclose(input);
    return 0;
}
