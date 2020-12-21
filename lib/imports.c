#include <stdio.h>
#include <emscripten.h>

// Declare reusable Javascript function
EM_JS(void, js_function, (int n), {
    console.log("Call from ES_JS: " + n)
});

int main() {

    printf("Wasm Ready\n");

    emscripten_run_script("console.log('Hello from C')");

    emscripten_async_run_script("console.log('Hello from C')",2000);

    int jsVal = emscripten_run_script_int("getNumber()");

    char * jsValString = emscripten_run_script_string("getString()");

    printf("Value from getString(): %s\n", jsValString);

    printf("Value from getNum(): %d\n", jsVal);

    //EXECUTE EM_JS fn
    js_function(144);

    return 1;
}

