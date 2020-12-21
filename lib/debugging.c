#include <stdio.h>
#include <emscripten.h>

char * str = "my string variable";

char * getStr(){
    return str;
}

int main() {

    printf("Wasm Ready\n");
}

int getNumber(){

    int num = 22;

    if(num < 30){
        emscripten_log( EM_LOG_WARN, "'num' is less than 30");
    }

    return num;
}