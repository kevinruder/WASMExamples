
/*H******************************************************
*
...  This file is intended to show how you can call C functions from Javascript.
...  Remember to export the functions with the flag "-s EXPORTED_FUNCTIONS=[_nameOfFunction]"
...  The function can be called from javascript with the _ as a prefix. This is assuming that Emscripten isn't being used.
...  If Emscripten isn't being used, you should be able to find it under wasm.instance.imports ( I think)
*
*H*/

#include <stdio.h>
#include <string.h>

int main() {
    printf("Wasm Ready - Still using javascript file \n");
    return 1;
}

int getNum(){
    return 22;
}

int getDoubleNum( int n ){
    return n*2;
}

char greeting[50];
char * greet (char * name) {
    if (strlen(name) > 40){
        return "Name too long";
    }
    strcpy(greeting, "Hello ");
    return strcat(greeting, name);
}