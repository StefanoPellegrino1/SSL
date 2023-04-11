#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file = fopen("output.txt", "wt");
    fputs("Hello, world!",file);
    fclose(file);

}