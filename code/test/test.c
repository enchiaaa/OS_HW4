#include "syscall.h"
#define MAX_SIZE 1000

main(){
    int array[MAX_SIZE], i, sum = 0;    // declare a sufficiently large int array
    for(i = 0; i < MAX_SIZE; i++){
        // perform some opeations
        array[i] = i;   
        PrintInt(i);
        //sum += i;        
    }
    //PrintInt(sum);
    return 0;
}
