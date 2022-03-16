
#include <stdio.h>
#include "prog1.h"
#include <string.h>


void line(char c, int length){
    for(int i = 0; i < length; i++){
    printf("%c",c);
    }
    puts("");
}

int main() {
    line('-',8);
    return 0;
}