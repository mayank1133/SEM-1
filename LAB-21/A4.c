#include <stdio.h>

int main() {
    FILE *source_file, *destination_file;
    char ch;

    source_file = fopen("source.txt", "r");

    destination_file = fopen("destination.txt", "a");

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);

    return 0;
}
