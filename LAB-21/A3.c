#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("example.txt", "w");
    fprintf(fp, "This is some text that we're writing to the file.\n");
    fclose(fp);
    fp = fopen("example.txt", "r");
    fscanf(fp, "%s", &ch);
    printf("Character read from file: %c\n", ch);
    fclose(fp);
    fp = fopen("example.txt", "w");
    fputc('A', fp);
    fclose(fp);
    fp = fopen("example.txt", "r");
    ch = fgetc(fp);
    printf("Character read from file: %c\n", ch);
    fclose(fp);
    fp = fopen("example.txt", "w");
    fprintf(fp, "This is some text that we're writing to the file.\n");
    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);
    printf("Character read from file: %c\n", ch);
    fclose(fp);
    return 0;
}
