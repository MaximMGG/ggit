#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "ERROR: No args!\n");
        return 0 ;
    }
    
    system("git add .");

    char *command = malloc(sizeof(char) * strlen(argv[1]) + 20);
    system("git commit -m ");
    strcpy(command, "git commit -m \"");
    strcat(command, argv[1]);
    strcat(command, "\"");
    system(command);
    system("git push origin master");

    free(command);
}
