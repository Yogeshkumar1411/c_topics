/*
*Program: Detecting stack corruption, setting one canary value in stack, getting know whenever it is affected.
*Name: Yogeshkumar S
*Date: 27/12/2023

to avoid stack corruption:
Always initialize variables - uninitialized variables can cause stack to become corrupt. 
							  Make sure to initialize all variables before using them.

Be careful with pointers - pointers are powerful tools, but they can also cause stack to become corrupt.
      					   Make sure to properly initialize and manage all pointers to prevent memory leaks 
							and invalid stack pointers.

Use stack-safe functions - some functions, such as strcpy(), can cause buffer overflows. 
						   Use stack-safe functions, such as strncpy(), to avoid these issues.

Use bounds checking - make sure to perform bounds checking on all arrays and buffers to prevent buffer overflows 
					  and stack corruption.

Use memory-safe libraries - C and C++ have a wide range of memory-safe libraries, such as GSL and Boost.
						    Consider using these libraries to prevent memory leaks and other memory-related issues.
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


#define CANARY_VALUE 0x0


struct StackInfo {
    uint32_t canary;   // Canary value
    uint32_t stackSize; // Stack size
};

void checkStackIntegrity(struct StackInfo stackInfo) {
    if (stackInfo.canary != CANARY_VALUE) {
        fprintf(stderr, "Stack corruption detected!\n");
        exit(EXIT_FAILURE);
    }
    printf("Stack integrity check passed.\n");
}


void recursiveFunction(int depth, struct StackInfo stackInfo) {
    if (depth % 10 == 0) {
        checkStackIntegrity(stackInfo);
    }

    char buffer[100];
    strcpy(buffer, "Stack corruption test");

    if (depth > 0) {
        recursiveFunction(depth - 1, stackInfo);
    }
}

int main() {
    struct StackInfo stackInfo;

    stackInfo.canary = CANARY_VALUE;
    stackInfo.stackSize = 1024; // Set an appropriate stack size

    recursiveFunction(1000, stackInfo);

  

    return 0;
}

