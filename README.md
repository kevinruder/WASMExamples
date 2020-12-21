# Wasm Examples

This project contaisn a few WASM examples. The HTML pages can be found under HTML_Examples and the C files can be found under lib.
The files are then served using expressJS. 

## Compiling C to WASM 

You can compile C to Wasm using Emscripten. Remember to have Emscripten installed. 
Here's an example of a command to compile the file lib/animations.c

emcc lib/animations.c -s WASM=1 -s EXPORTED_FUNCTIONS=[_getCircles,_main] -o public/animations.js

## Importing the Compiled WASM to your HTML.
To import the WASM, just make sure you're referencing the JS file that emscripten creates along with the compilation. 
The JS file should be reference in a script tag as the src. 

## Running the server

Use the command yarn start to start the server. 