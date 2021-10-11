#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void blink_parse(char *line){
    printf("%s\n",line);
}
void main(int argc, char *argv[]){
    FILE *fp;
    if(argc != 2){
        printf("\nUsage: %s <filename>\n", argv[0]);
        exit(1);
    }
    printf("\nPretty Basic Lexical Analyser\n");
    printf("\nFile Selected: %s\n", argv[1]);
    printf("\nOmjelo");
    //Opens the file
    fp = fopen(argv[1], "r");

    if(fp == NULL){
        printf("\nError: File not found\n");
    }

    //Reads the file
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while((read = getline(&line, &len, fp)) != -1)
    {
        blink_parse(line);
    }
    fclose(fp);
    if(line)
        free(line); 
}