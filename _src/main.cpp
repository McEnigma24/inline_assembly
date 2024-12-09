#include "__preprocessor__.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int val = 0;

void assembly_function()
{
    asm volatile
    (
        "pushq %rax        \n"
        "movq $5, %rax     \n"
        "movq %rax, val    \n"
        "popq %rax         \n"
    );
}

int main(int argc, char* argv[])
{
    cout << "It just works" << endl;

    var(val);
    assembly_function();
    var(val);
    
    return 0;
}
