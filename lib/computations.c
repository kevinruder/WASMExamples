/*H******************************************************
*
...  Examples of computations that could be done using WASM.
...  Unfortunately when compared with the same function in Javascript, it performs slower.
...  I do not know why. 
*
*H*/

int isPrime(int num){
    for(int i=2; i < num; i++)
        if(num % i == 0) return 0;
    return (num != 1 && num != 0) ? 1 : 0;
}

int checkPrimes(int num){
        int count = 0;
        for(int i = 0; i< num; i++)
            if(isPrime(i)) count++;
        return count;
}